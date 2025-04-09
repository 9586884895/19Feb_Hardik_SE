/*Write a C program that takes two strings from the user and 
concatenates them using strcat(). 
Display the concatenated string and its length using strlen.*/
#include<stdio.h>
#include<string.h>
main()
{
	char a[10],b[10];	
	printf("Enter your string:");
	scanf("%s",&a);
	printf("\nEnter your string 1:");
	scanf("%s",&b);	
	strcat(a,b);
	printf("your final string is:%s",a);
	printf("\nlength of string is: %d",strlen(a));
	
}

