/*Write a C++ program that takes a student's marks as input and calculates 
the grade based on if-else conditions.
Objective: Practice conditionalstatements(if-else).*/
#include<iostream>
using namespace std;
main()
{
	int s1,s2,s3,s4,total;
	float per;
	cout<<"Enter the mark of Subject-1:";
	cin>>s1;
	cout<<"Enter the mark of Subject-2:";
	cin>>s2;
	cout<<"Enter the mark of Subject-3:";
	cin>>s3;
	cout<<"Enter the mark of Subject-4:";
	cin>>s4;
	total=s1+s2+s3+s4;
	cout<<"Total marks of Students:"<<total<<endl;
	per=total/4;
	cout<<"Your percentage is="<<per<<endl;
	if(per>=70)
	{
		cout<<"First Class= Excellent"<<endl;
	}
	else if(per>=60)
	{
		cout<<"Second Class= Good"<<endl;
	}
	else if(per>=40)
	{
		cout<<"Third Class= Avearage"<<endl;
	}
	else
	{
		cout<<"Fail Class= Bad"<<endl;
	}
	
	
}
