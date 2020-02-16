#include<iostream>

using namespace std;

int main()
{
	float BMI,weight,height;
	
	cout<<"please enter weight(pounds)=";
	cin>>weight;
	cout<<"please enter height(inch.)=";
	cin>>height;
	
	BMI=weight*703/(height*height);
	
	cout<<"the BMI is="<<BMI<<"\n";
	
	if(BMI<=25 && BMI>=18.5)
	{
		cout<<"You are at optimal weight\n";
 
	}
	
	if(BMI> 25)
		{
			cout<<"you are overweight\n";
		}
		
	else if(BMI<18.5)
	{
	cout<<"you are underweight";
	}
	return 0;
}
