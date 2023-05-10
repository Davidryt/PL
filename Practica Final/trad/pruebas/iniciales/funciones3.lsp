(defun mimax (a  b ) 
	(let
	()
		(if (>= a b) 
	(progn 
	(print a)  
)	(progn 
	(print b)  
)	) 
	)
)
(defun main ()
	(let
	()
		(mimax 10  1 ) 
	(mimax 1  10 ) 
	(mimax 10  10 ) 
	)
) 
 (main)
