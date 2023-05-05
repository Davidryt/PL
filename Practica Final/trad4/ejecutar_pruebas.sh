#!/bin/bash
cd "$(dirname "$0")/pruebas"
exitos_iniciales=0
exitos_avanzadas=0
errores_iniciales=0
errores_avanzadas=0

for dir in iniciales avanzadas; do
  for file in "$dir"/*.c; do
    output_file="${file%.c}.lsp"
    cat "$file" | ../traductor > "$output_file" 2>&1
    if grep -q "syntax error" "$output_file"; then
      echo "\e[31mError en la prueba $file. Revisa la sintaxis.\e[0m"
      if [ $dir = "iniciales" ]; then
        errores_iniciales=$(( errores_iniciales + 1 ))
      else
        errores_avanzadas=$(( errores_avanzadas + 1 ))
      fi
    else
      echo "\e[32mPrueba $file completada.\e[0m"
      if [ $dir = "iniciales" ]; then
        exitos_iniciales=$(( exitos_iniciales + 1 ))
      else
        exitos_avanzadas=$(( exitos_avanzadas + 1 ))
      fi
    fi
  done
done
echo "\nAnalizando los resultados"

echo "\n\n\nINICIALES:\n\e[32mNumero de pruebas con exito: $exitos_iniciales\e[0m\n\e[31mNumero de pruebas con errores: $errores_iniciales\e[0m"
echo "\nAVANZADAS:\n\e[32mNumero de pruebas con exito: $exitos_avanzadas\e[0m\n\e[31mNumero de pruebas con errores: $errores_avanzadas\e[0m"
