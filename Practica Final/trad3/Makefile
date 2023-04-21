make:
	bison trad3.y -Wcounterexamples
	gcc trad3.tab.c -o davidCodifica
	#clear
	./davidCodifica <entrada.txt >salida.txt
	echo "\n"
	cat salida.txt