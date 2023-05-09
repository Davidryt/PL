make:
	bison trad.y -Wcounterexamples
	gcc trad.tab.c -o traductor
	#clear
	./traductor <entrada.txt >salida.txt
	echo "\n"
	cat salida.txt
	sh borrar_pruebas.sh
	sh ejecutar_pruebas.sh
	sh comparar.sh 


clean:
	rm -f traductor trad.tab.c
	sh borrar_pruebas.sh
