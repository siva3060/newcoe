/// Euclid algorithm to find the GCD

#include<stdio.h>
#include<stdlib.h>

void main(int argc,char* argv[])
{
	
/// Input from command line in the form of ./neweuclid a b
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int gcd,reminder,quotient;
	int loop = 1;
	int q[50];
	int x[50];
	int y[50];

	x[0] = 1;
	x[1] = 0;
	y[0] = 0;
	y[1] = 1;

	int xcal,ycal;

// Step 1
	
	if(b > a)
	{
	// Swapping the value of a and b
	
	printf("The value of b is greater than a swapping the values \n");
		int temp;
		temp = b;
		b = a;
		a = temp;
	}
// Step 2

	//	printf("Loop\treminder\tquotient\txi\tyi\t\n");
	do
	{
		
		
		reminder = a % b;
		q[loop] = a / b;
		
			xcal = x[loop -1] - (q[loop] * x[loop]);
			ycal = y[loop -1] - (q[loop] * y[loop]);
			//x[loop] = xcal;
			//y[loop] = ycal;
	
printf("loop : %d xcal : %d ycal : %d x[%d] : %d y[%d] : %d\n",loop,xcal,ycal,loop,x[loop],loop,y[loop]);
		
		a = b;
		b = reminder;

		
		//printf("Loop :%d\treminder :%d\t Quotient :%d\t xi :%d\tyi :%d\t\n",loop,reminder,quotient,xcal,ycal);
		loop++;
	//printf(%d A : %d B : %d reminder : %d quotient : %d \n",loop,a,b,reminder,quotient);
	}
	while(reminder != 0);

	printf("The GCD of %d and %d is : %d\n ", atoi(argv[1]),atoi(argv[2]),a);

}
