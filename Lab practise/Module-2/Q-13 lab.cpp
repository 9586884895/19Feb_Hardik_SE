/*13.Write a C program to create a file, write a string into it,
 close the file, the n open the file again to read and display its contents.*/
#include<stdio.h>
void myfile()
{
	FILE *myfile;
	myfile=fopen("file handling.txt","w"); //file creating
	printf("My file is created");
	printf("\n My name is Hardik");
	fprintf(myfile,"\n My name is Hardik");
}
main()
{
	myfile();
}
