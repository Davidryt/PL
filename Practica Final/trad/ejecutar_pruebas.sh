#!/bin/bash
cd "$(dirname "$0")/pruebas"
exitos=0
errores=0

for dir in iniciales avanzadas adicionales; do
  for file in "$dir"/*.c; do
    output_file="${file%.c}.lsp"
    cat "$file" | ../traductor > "$output_file" 2>&1
    if grep -q "syntax error" "$output_file"; then
      echo "\e[31mError en la prueba $file. Revisa la sintaxis.\e[0m"     
      errores=$(( errores + 1 ))

    else
      echo "\e[32mPrueba $file completada.\e[0m"
      exitos=$(( exitos + 1 ))

    fi
  done
done
echo "\nAnalizando los resultados"

echo "\n\n\nINICIALES:\n\e[32mNumero de pruebas con exito: $exitos\e[0m\n\e[31mNumero de pruebas con errores: $errores\e[0m"
