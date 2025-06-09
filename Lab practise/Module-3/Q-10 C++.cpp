/*Write a C++ program to display the multiplication table of a given number
using a for loop.*/
#include<iostream>
using namespace std;
main()
{
	int a,i;
	cout<<"Enter the value:";
	cin>>a;
	for(i=1;i<=10;i++)
	{
		cout<<a<<"*"<<i<<"="<<a*i<<endl;
	}
}
