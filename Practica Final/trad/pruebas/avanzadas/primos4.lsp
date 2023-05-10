(setq primo 0)  
(setq n 0)  
(setq m 0)  
(defun main ()
	(let
	((d 0)  (i 0)  (p 0)  )
		(setq i 1) 
	(setq n 1) 
	(setq m 100) 
	(setq i 1)
	(loop while (<= i m) do 
(let
		()
		(setq d 2) 
	(setq primo 1) 
	(loop while (And (= primo 1) (< d i)) do 
	(setq p (mod i d)) 
	(if (= p 0) 
	(progn 
	(setq primo 0) 
)	) 
	(setq d (+ d 1)) 
	) 
	(if (= primo 1) 
	(progn 
	(print i)  
)	) 

)
	(setq i (+ i 1)))
	)
) 
 (main)
