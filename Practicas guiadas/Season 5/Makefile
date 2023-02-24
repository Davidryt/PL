make:
	lex calc5.lex
	bison calc5.y -d
	gcc lex.yy.c calc5.tab.c
	echo "-------------------------------------------------------------------------------------------"
	./a.out