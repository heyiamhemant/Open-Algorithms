def factorial(n): 
	if n < 0: 
		return 0
	elif n == 0 or n == 1: 
		return 1
	elif (n > 1): 
		return(n*factorial(n-1))

# Driver Code 
num = int(input());

print(factorial(num))
