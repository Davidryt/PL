(defun factoriala (n  f  fm ) 
	(let
	()
		(if (= n 1) 
	(progn 
	(print f)  
)	(progn 
	(factoriala (- n 1)  (* f fm)  (- fm 1) ) 
)	) 
	)
)
(defun factorialwrapper (n ) 
	(let
	()
		(factoriala n  n  (- n 1) ) 
	(print "") 
	)
)

(defun main ()
	(let
	()
		(factorialwrapper 1 ) 
	(factorialwrapper 2 ) 
	(factorialwrapper 3 ) 
	(factorialwrapper 4 ) 
	(factorialwrapper 5 ) 
	(factorialwrapper 6 ) 
	)
) 
 (main)
