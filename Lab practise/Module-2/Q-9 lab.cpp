//Write a C program that stores 5 integers in a one-dimensional array and prints them. 
#include<stdio.h>
void one()
{
	int i,a[5]={12,5,7,8,10};
	printf("\n----One Dimentional Array----");
	for(i=0;i<5;i++)
	{
		printf("\nThe value is %d",a[i]);		
	}
}
void two()
{
	int n;
	printf("\n----Multi Dimentional Array----");
	printf("\nplease enter your Students:");
	scanf("%d",&n);
	char name[n][10];
	int i,id[n];
	for(i=0;i<n;i++)
	{
		printf("Enter your name:");
		scanf("%s",&name[i]);
		printf("Enter your ID:");
		scanf("%d",&id[i]);
	}
	printf("\n\n ID = Name");
	for(i=0;i<n;i++)
	{		
		printf("\n%d=%s",id[i],name[i]);
	
	}
	
}
main()
{
	one();
	two();
}

