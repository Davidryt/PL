(defun cuadrado (a ) 
	(let
	((c 0)  )
		(setq c (* a a)) 
	(return-from cuadrado (values c ))
	)
)
(defun main ()
	(let
	((a 0)  (c 0)  )
		(setq a 7) 
	(print "El cuadrado de ") 
	(print a)  
	(setq c (cuadrado a )) 
	(print " es ") 
	(print c)  
	(setq a 12) 
	(print "El cuadrado de ") 
	(print a)  
	(print " es ") 
	(print (cuadrado a ))  
	)
) 
 (main)