def func():
	num = 600851475143
	i = 3
	itr=1
	largestPrimeFactor = 1
	while(i < num/2):
		print("iteration-",itr)
		if(i % num == 0 and isPrime(i) and i > largestPrimeFactor):
			largestPrimeFactor = i
		itr+=1	
	print largestPrimeFactor		


def isPrime(num):
	c = 3
	while(c < num/2):
		if(c%num == 0):
			return false
		c+=2			
	return true		

if __name__ == '__main__':
	func()