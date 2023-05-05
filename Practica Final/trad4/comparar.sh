
#!/bin/bash
cd "$(dirname "$0")/pruebas"

for dir in iniciales avanzadas; do
for file in "$dir"/*.c; do
    echo "Compiling C $file"
    output_file="${file%.c}_c.txt"
    gcc "$file" -o "${file%.c}.o" -Wimplicit-int
    echo "Executing C $file"
    ./"${file%.c}.o" > "$output_file"
done

for file in "$dir"/*.lsp; do
    output_file="${file%.lsp}_lisp.txt"
    echo "Executing LISP $file"
    clisp "$file" > "$output_file"
done

for file in "$dir"/*.txt; do
    expected_file="${file%.txt}.out"
    if cmp -s "$file" "$expected_file"; then
        echo "File ${file%.txt} matches."
    else
        echo "File ${file%.txt} does not match."
    fi
done
done
