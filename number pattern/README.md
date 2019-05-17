#NUMBER PATTERN
###Pseudo Code:
	for  i=0 to 2*n-1
		for j=0 to j<2*n-1
    //for the first quadrant
			if  i<n  &&  j<n  
				if  j>=i
					print  n-i
				else if  i>j
					print  n-j
				else
					print  n
    //for the second quadrant
			else if  i<n  &&  j>=n
				if  j<2*n-i-1
					print  n-i
				else if  j>=2*n-i-1
					print  n-(2*n-j-2)
    //for the third quadrant
			else if  i>=n  &&  j<n
				if  2*n-i-1>j
					print  n-j
				else if  2*n-i-1<=j
					print  i+2-n
				else
					print n
		//for the fourth quadrant
			else
				if  i-n>=j-n
					print  i-n+2
				else if  i-n<j-n
					print  j-n+2
	   /n
