/*Write a C program that uses the break statement to stop printing numbers
 when it reaches 5.
Modify the program to skip printing the number 3 using the continue statement.*/
#include<stdio.h>
void br()
{
	int a;
	for(a=1;a<=10;a++)
	{
		printf("%d\n",a);
		if(a==5)
		{
			break;
		}
	}
}
void cont()
{
	int b;
	for(b=1;b<10;b++)
	{
		if(b==3)
		{
			continue;
		}
		printf("%d\n",b);
	}
}
main()
{   
	printf("Task-1\n");
	br();
	printf("Task-2\n");
	cont();
}
