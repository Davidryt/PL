make:
	bison trad.y -Wcounterexamples
	gcc trad.tab.c -o traductor
#	clear
	./traductor <entrada.txt >salida1.txt
	./traductor <entrada2.txt >salida2.txt
	echo "\n"
	cat salida1.txt
	echo "\n"
	cat salida2.txt
	sh borrar_pruebas.sh
	sh ejecutar_pruebas.sh
	sh comparar.sh 


clean:
	rm -f traductor trad.tab.c
	sh borrar_pruebas.sh
