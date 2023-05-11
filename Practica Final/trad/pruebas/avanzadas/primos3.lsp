(setq d 0)  
(setq n 0)  
(setq m 0)  
(defun esprimo (n ) 
	(let
	((primo 0)  (d 0)  )
		(setq primo 1) 
	(setq d 2) 
	(loop while (And (< d n) (= primo 1)) do 
	(if (= (mod n d) 0) 
	(progn 
	(setq primo 0) 
)	) 
	(setq d (+ d 1)) 
	) 
	(return-from esprimo (values primo ))
	)
)
(defun listaprimos (n  m ) 
	(let
	()
		(loop while (< n m) do 
	(if (/= (esprimo n ) 0) 
	(progn 
	(print n)  
)	) 
	(setq n (+ n 1)) 
	) 
	)
)

(defun main ()
	(let
	((d 0)  (i 0)  )
		(listaprimos 1  100 ) 
	)
) 
 (main)
