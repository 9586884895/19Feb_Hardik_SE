/* Write a C program that defines a structure to store a student's details 
(name, roll number, and marks). Use an array of structures to store details
of multiple students and print them.*/
#include<stdio.h>
struct studinfo
{
	char name[10];
	int roll,mark;
};
main()
{
	int i,n;
	printf(" Enter the number of students:");
	scanf("%d",&n);
	studinfo st[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the Name of students:-");
		scanf("%s",&st[i].name);
		printf("Enter the Roll Number:");
		scanf("%d",&st[i].roll);
		printf("Enter the Marks:");
		scanf("%d",&st[i].mark);		
	}
		printf("Name==RollNo.==Marks");	
	for(i=0;i<n;i++)
	{   
		printf("\n%s==%d==%d",st[i].name,st[i].roll,st[i].mark);		
	}			
	
	
		
}
