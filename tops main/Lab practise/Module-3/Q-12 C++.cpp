/*Write a C++ program that demonstrates arithmetic, relational, logical operators.
Perform operations using each type of operator and display the results.*/
#include<iostream>
using namespace std;
main()
{
	int a,b;
	cout<<"Enter the First Value:";
	cin>>a;
	cout<<"Enter the Second Value:";
	cin>>b;
	//Arithmetic operations
	cout<<"a+b="<<a+b<<endl;
	cout<<"a-b="<<a-b<<endl;
	cout<<"a*b="<<a*b<<endl;
	cout<<"a/b="<<a/b<<endl;
	
	// Relational operations
	cout<<"(a==b) is"<<(a==b)<<endl;
	cout<<"(a!=b) is"<<(a!=b)<<endl;
	
	//logical operations
	if(a>=0 && b>=0)
	{
		cout<<"Both Numbers Area Positive";
	}
	else
	{
		cout<<"Both Numbers Area Negetive";
	}
	
	
}
