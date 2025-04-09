//Write a C program that accepts two integers from the user and performs arithmetic-
// relational, and logical operations on them. Display the results.
#include<stdio.h>
float a,b;
main()
{
    // arithmatic
	printf(" please enter the value:");
	scanf("%f",&a);
	printf(" please enter the value:");
	scanf("%f",&b);
	printf("\nSum of two value;%0.2f",a+b);
	printf("\nSub of two value;%0.2f",a-b);
	printf("\nMul of two value;%0.2f",a*b);
	printf("\nDivision of two value;%0.2f",a/b);

	// relational
	printf("\nplease enter the value:");
	scanf("%f",&a);
	printf(" please enter the value:");
	scanf("%f",&b);
	if(a<b)
	{
		printf("A is Small Number");
	}
	else
	{
		printf("A is Bigger Number");
	}
	
}
