/*Write a C++ program that performs both implicit and explicit type conversions
 and prints the results*/
#include<iostream>
using namespace std;
main()
{
	int intvalue=15;
	double doublevalue=intvalue;// implicit conversion int to Double.
	cout<<"--Result of implicit Value--"<<endl;
	cout<<"intvalue:"<<intvalue<<endl;
	cout<<"converted to Double"<<doublevalue<<endl;
	
	int a;
	double value=12.58;
	int convert=(int)value;// Explicit convert from double to int. using Typecast
	cout<<"--Result of Explicit value--"<<endl;
	cout<<"Double value is:"<<value<<endl;
	cout<<"converted value is:"<<convert<<endl;
}
