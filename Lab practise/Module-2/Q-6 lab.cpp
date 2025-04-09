//Write a C program to print numbers from 1 to 10 using-
// all three types of loops (while, for, do-while).
#include<stdio.h>
main()
{
	int a=0; //start
	printf("---while loop---\n");// while loop
	while(a<=10) // condition
	{
		printf("%d\n",a);
		a+=1;
	}
	printf("--- Do while loop---\n");//do while loop
	int b=0;// start
	do
	{
		printf("%d\n",b);
		b++;
	}
	while(b<=10);
	printf("---for loop---\n");// for Loop
	int c=0;
	for(c=0;c<=10;c++)
	{
		printf("%d\n",c);
	}
}
