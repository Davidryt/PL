#!/bin/bash
cd "$(dirname "$0")/pruebas"
find . -name "*.lsp" -type f -delete
find . -name "*.txt" -type f -delete
find . -name "*.o" -type f -delete
