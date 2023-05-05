make:
	bison trad4.y -Wcounterexamples
	gcc trad4.tab.c -o traductor
	#clear
	./traductor <entrada.txt >salida.txt
	echo "\n"
	cat salida.txt
	sh borrar_pruebas.sh
	sh ejecutar_pruebas.sh
	sh comparar.sh 