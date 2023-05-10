(defun collatz (n  cont ) 
	(let
	((retorno 0)  )
		(print n)  
	(if (= n 1) 
	(progn 
	(setq retorno cont) 
)	(progn 
	(if (= (mod n 2) 0) 
	(progn 
	(setq retorno (collatz (/ n 2)  (+ cont 1) )) 
)	(progn 
	(setq retorno (collatz (+ (* 3 n) 1)  (+ cont 1) )) 
)	) 
)	) 
	(return-from collatz (values retorno ))
	)
)
(defun main ()
	(let
	((resultado 0)  (i 0)  )
		(print "Sucesion de Collatz") 
	(setq i 2)
	(loop while (< i 100) do 
(let
		()
		(setq resultado (collatz i  0 )) 
	(print i) (print resultado)  

)
	(setq i (+ i 1)))
	)
) 
 (main)
