(defun fibonacci (n ) 
	(let
	((retorno 0)  )
		(if (< n 2) 
	(progn 
	(setq retorno 1) 
)	(progn 
	(setq retorno (+ (fibonacci (- n 1) ) (fibonacci (- n 2) ))) 
)	) 
	(return-from fibonacci (values retorno ))
	)
)
(defun main ()
	(let
	((resultado 0)  (i 0)  )
		(print "Sucesion de Fibonacci") 
	(setq i 2)
	(loop while (< i 10) do 
(let
		()
		(setq resultado (fibonacci i )) 
	(print i) (print resultado)  

)
	(setq i (+ i 1)))
	)
) 
 (main) 
