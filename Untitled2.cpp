#include<iostream>

using namespace std;

int main()

{
	float seconds,minutes,hours,days;
	cout<<"enter time in seconds=";
	cin>>seconds;
	
	minutes=seconds/60;
	hours=seconds/3600;
	days=seconds/86400;
	
	if(seconds>=60 && seconds<=3600)
	{
		cout<<"total minutes in "<<seconds<<"seconds are="<<minutes<<"minutes\n";
    }
 else if(seconds>=3600 && seconds<86400)
	{
		cout<<"total hours in "<<seconds<<"seconds are= "<<hours<<" hours\n";
	}
	else if(seconds>=86400) 
	{
	cout<<"total days in "<<seconds<<"seconds are= "<<days<<"days\n";
	}
	return 0;
}
