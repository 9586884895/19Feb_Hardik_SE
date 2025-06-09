/*Write a C++ program that asks the user to guess a number between 1 and 100. 
The program should provide hints if the guess is too high or too low. 
Use loops to allow the user multiple attempts.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
main()
{
	srand(time(0));
	int secretnum=rand()%100+1;
	int guess;
	cout<<"Guess a number Between 1 to 100:";
	while(true)
	{
		cin>>guess;
		if(guess==secretnum)
		{
			cout<<"Congratulation! You have entered right number";
			break;			
		}
		else if(guess<secretnum)
		{
			cout<<" Too Low! Try Again";
		}
		else
		{
			cout<<" Too High! Try again";
		}
		
	}
}
