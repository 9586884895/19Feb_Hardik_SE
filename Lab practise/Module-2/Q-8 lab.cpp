/* Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call.*/
#include<stdio.h>
void fact()// Declaration
{
	int n,i,factorial=1;
	printf(" Enter the Number:-");
	scanf("%d",&n);
	if(i<0)
	{
		printf("\n Factorial can't nagetive number");	
	}
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	printf("Factorial of %d is:%d",n,factorial);
	
}
main()
{
	fact();// call
}


