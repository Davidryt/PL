(defun main ()
	(let
	((a 0)  (b 0) (c 0) (max 0) )
		(print "Enter three numbers: ") 
	(setq a 2) 
	(setq b 7) 
	(setq c 90) 
	(if (And (>= a b) (>= a c)) 
	(progn 
	(setq max a) 
)	) 
	(if (And (>= b a) (>= b c)) 
	(progn 
	(setq max b) 
)	(progn 
	(setq max c) 
)	) 
	(print max)  
	)
) 
 (main) 
