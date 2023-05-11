(defun fibonacci (a  b  n ) 
	(let
	()
		(if (< n 2) 
	(progn 
	(return-from fibonacci (values b ))
)	) 
	(return-from fibonacci (values (fibonacci b  (+ a b)  (- n 1) ) ))
	)
)
(defun main ()
	(let
	((resultado 0)  (i 0)  )
		(print "Sucesion de Fibonacci") 
	(setq i 0)
	(loop while (< i 47) do 
(let
		()
		(setq resultado (fibonacci 0  1  i )) 
	(print i) (print resultado)  

)
	(setq i (+ i 1)))
	)
) 
 (main)
