#include<iostream>/* Area of Rectangle with using Function*/
using namespace std;
float Rectangle()
{
	float length,width;
	cout<<"Enter the Length:-";
	cin>>length;
	cout<<"Enter the Width:-";
	cin>>width;
	return length*width;	
}
float answer()
{   float ans;
	ans=Rectangle();
	cout<<"Area of Rectangle is"<<ans;
}
main()
{
	answer();
}
