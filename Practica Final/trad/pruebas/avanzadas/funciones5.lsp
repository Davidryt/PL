(defun mifuncion () 
	(let
	((c 0)  )
		(setq c 123) 
	(print "Prueba") 
	(return-from mifuncion (values (+ c 1) ))
	)
)
(defun main ()
	(let
	((c 0)  )
		(setq c (mifuncion)) 
	(print c) (print (mifuncion))  
	)
) 
 (main)
