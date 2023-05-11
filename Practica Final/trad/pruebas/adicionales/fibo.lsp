(defun main ()
	(let
	((i 0)  (num1 0) (num2 1) (nextnum 0) )
		(print num1) (print num2)  
	(setq i 3)
	(loop while (< (+ num1 num2) 100) do 
(let
		()
		(setq nextnum (+ num1 num2)) 
	(print nextnum)  
	(setq num1 num2) 
	(setq num2 nextnum) 

)
	(setq i (+ i 1)))
	)
) 
 (main) 
