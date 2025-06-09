/*5.Write a C++ program that demonstrates the use of variables and constants.*/
#include<iostream>
using namespace std;
main()
{
	int age=25;// Variable Declaration
	const float gravity=9.8; // constant Declaration also value can not change.
	
	cout<<"Age is "<<age<<endl;
	cout<<"Gravity is "<<gravity<<endl;
	
	age=30; // Variable value change
	cout<<"updated age is "<<age;	
}
