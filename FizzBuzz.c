/****************************************************************
Function for generating the first n Fibonacci numbers F(n),
and	printing as following. 
	"Buzz" when F(n) is divisible by 3.
	"Fizz" when F(n) is divisible by 5.
	"FizzBuzz" when F(n) is divisible by 15.
	"BuzzFizz" when F(n) is prime.
	the value F(n) otherwise.
*****************************************************************/
void FizzBuzz(int num)
{
	int fib1 = 0, fib2 = 1, temp, cnt = 0;
	while (cnt < num)
	{
		cnt++;
		// number divisible by 15? print 'FizzBuzz'
		if (fib2 % 15 == 0)
			printf("FizzBuzz\n");
		// number divisible by 3? print 'Buzz'
		else if ((fib2 % 3) == 0)
			printf("Buzz\n");
		// number divisible by 5, print 'Fizz' 
		else if ((fib2 % 5) == 0)
			printf("Fizz\n");
		// number is prime? print 'BuzzFizz'
		else if (isPrime(fib2))          
			printf("BuzzFizz\n");
		else
			printf("%d\n", fib2);
		temp = fib1;
		fib1 = fib2;
		//Update Fibonacci number
		fib2 = fib2 + temp;

	}
}

/****************************************************************

Function for checking if given number is the prime number

****************************************************************/
int isPrime(int n)
{
	// Corner cases
	if (n <= 1)  return 0;
	if (n <= 3)  return 1;

	// middle five numbers in below loop can be skipped
	if (n % 2 == 0 || n % 3 == 0)
		return 0;

	for (int i = 5; i*i <= n; i = i + 6)
		if (n%i == 0 || n % (i + 2) == 0)
			return 0;

	return 1;
}
