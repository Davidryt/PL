(defun main ()
	(let
	((arr (make-array 5))  (i 0)  (j 0) (n 4)  (temp 0)  )
		(setf (aref arr 0) 64)  
	(setf (aref arr 1) 25)  
	(setf (aref arr 2) 12)  (setf (aref arr 3) 22)  (setf (aref arr 4) 11)  
	(setq i 0)
	(loop while (< i (- n 1)) do 
(let
		()
		(setq j 0)
	(loop while (< j (- (- n i) 1)) do 
(let
		()
		(if (> (aref arr j) (aref arr (+ j 1))) 
	(progn 
	(setq temp (aref arr j)) 
	(setf (aref arr j) (aref arr (+ j 1)))  
	(setf (aref arr (+ j 1)) temp)  
)	) 

)
	(setq j (+ j 1)))

)
	(setq i (+ i 1)))
	(print "Arreglo ordenado: ") 
	(setq i 0)
	(loop while (< i n) do 
(let
		()
		(print (aref arr i))  

)
	(setq i (+ i 1)))
	(print "") 
	)
) 
 (main) 
