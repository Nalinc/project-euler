def func():
	first = 1
	second = 2
	val = 2
	while(1):
	    sum = first + second;
	    first  = second
	    second = sum
	    if(sum % 2 ==0):
	            val+=sum
	    if(sum >= 4000000):
	            break;

	print val
	

if __name__ == '__main__':
	func()
