//Write a C program that includes variables, constants, and comments. 
//Declare and use different data types (int, char, float) and display their values.
#include<stdio.h>
main()
{
	int a;
	long int b=123456987;
	float c;
	double d;
	long double e;
	char f;
	char g[15]="Hardik";
	printf("size of int=%d",sizeof(a));
	printf("\nsize of long int=%d",sizeof(b));
	printf("\nsize of float=%d",sizeof(c));
	printf("\nsize of double=%d",sizeof(d));
	printf("\nsize of int=%d",sizeof(e));
	printf("\nsize of char=%d",sizeof(f));
	printf("\nsize of string=%d",sizeof(g));
}
