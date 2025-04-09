#include<stdio.h>
#include<string.h>
char str[15];
void rev()
{
	printf(" Reverse of string is:%s",strrev(str));
}
void con()
{	char str1[15];
	printf("Enter your string-1:");
	scanf("%s",&str1);
	printf(" your string is:%s",strcat(str,str1));
}
void copy()
{	char copy[15];
	printf(" your string is:%s",str);
	printf(" \ncopied string is:%s",strcpy(copy,str));
}
void length()
{		
	printf(" length of string is:-%d",strlen(str));
}
void comp()
{
	char str2[15];
	printf("Enter your String:-");
	scanf("%s",&str2);
	if(strcmpi(str,str2)==0)
	{
		printf("comparizon Sucessfull");
	}
	else
	{
		printf("False! Character Not Match");
	}
}
void upr()
{
	printf("\n string in Upper case=%s",strupr(str));
}
void lwr()
{
	printf("\n string in lower case=%s",strlwr(str));
}
void show()
{
	printf("\nyour string is %s",str);
}
void pali()
{
	int i,len,temp=0;
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-1-i])
		{
			temp=1;
		}
	}
		if(temp==0)
		{
			printf(" string is palindrome");
		}
		else
		{
			printf("sorry! string is not palindrome");
		}
}
main()
{
	int choice,g;	
	do
	{		
		printf("----Menu----");
		printf("\n1.Reverse of string");
		printf("\n2.concat of string");
		printf("\n3.copy a string");
		printf("\n4.Length of string");
		printf("\n5.comparison of string");
		printf("\n6.Upercase of string");
		printf("\n7.Lowercase of string");
		printf("\n8.Show your string");
		printf("\n9.Palindrome string");
		printf("\nEnter your choise:-");
		scanf("%d",&choice);
		printf("\n Enter your String:-");
		scanf("%s",&str);	
		switch(choice)
		{
			case 1:
				rev();
				break;
			case 2:
				con();
				break;
			case 3:
				copy();
				break;
			case 4:
				length();
				break;
			case 5:
				comp();
				break;
			case 6:
				upr();
				break;
			case 7:
				lwr();
				break;
			case 8:
				show();
				break;
			case 9:
				pali();
				break;
			default:
				printf(" Please enter Valid choice");
		}
			printf("\nIf you want cont than write 1 either press any key=");
			scanf("%d",&g);
	}	
	while(g==1);
}
