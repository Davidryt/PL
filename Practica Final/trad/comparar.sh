
#!/bin/bash
cd "$(dirname "$0")/pruebas"

for dir in iniciales avanzadas adicionales; do
for file in "$dir"/*.c; do
    echo "Compiling C $file"
    output_file="${file%.c}_c.txt"
    gcc "$file" -o "${file%.c}.o" -Wimplicit-int -w
    echo "Executing C $file"
    ./"${file%.c}.o" > "$output_file"
done

for file in "$dir"/*.lsp; do
    output_file="${file%.lsp}_lisp.txt"
    echo "Executing LISP $file"
    clisp "$file" > "$output_file"
done

for file in "$dir"/*_c.txt; do
    c_file="${file%_c.txt}_c.txt"
    l_file="${file%_c.txt}_lisp.txt"
    tr -d '"' < "$c_file" | tr -d '\n' > c_file.tmp
    tr -d '"' < "$l_file" | tr -d '\n' > l_file.tmp
    if diff -wB c_file.tmp l_file.tmp >/dev/null; then
      echo "\e[32mFile ${file%.txt} matches.\e[0m"
    else
      echo "\e[31mFile ${file%.txt} does not match.\e[0m"
    fi
    rm -f c_file.tmp l_file.tmp
done
done
