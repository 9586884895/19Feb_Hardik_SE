//Write a C program to check if a number is even or odd using an if-else statement.
#include<stdio.h>
main()
{
	int a,b;
	printf("please enter the value=");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf(" The number is Even");
	}
	else
	{
		printf(" the number is odd");
	
	}
	//Extend the program using a switch statement to display the month name based
	// on the user's input (1 for January, 2 for February, etc.).
	printf("\nPlease enter the Month Number:");
	scanf("%d",&b);
	switch(b)
	{
		case 1:
			printf(" January month");
			break;
		case 2:
			printf(" February month");
			break;
		case 3:
			printf(" March month");
			break;
		case 4:
			printf(" April month");
			break;
		case 5:
			printf(" May month");
			break;	
		case 6:
			printf(" June month");
			break;
		case 7:
			printf(" July month");
			break;
		case 8:
			printf(" August month");
			break;
		case 9:
			printf(" Sept month");
			break;
		case 10:
			printf(" October month");
			break;
		case 11:
			printf(" November month");
			break;
		case 12:
			printf(" December month");
			break;
		default:
			printf("error");
		
	}
	
	
}

