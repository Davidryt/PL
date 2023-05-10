(defun factorial (n ) 
	(let
	((retorno 0)  )
		(if (= n 1) 
	(progn 
	(setq retorno 1) 
)	(progn 
	(setq retorno (* n (factorial (- n 1) ))) 
)	) 
	(print n) (print retorno)  
	(return-from factorial (values retorno ))
	)
)
(defun main ()
	(let
	((resultado 0)  )
		(setq resultado (factorial 7 )) 
	(print resultado)  
	)
) 
 (main)
