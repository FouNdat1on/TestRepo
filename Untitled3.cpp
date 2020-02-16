#include<iostream>

using namespace std;

int main()
{
	int selection;
	float area_circle,area_rectangle,area_triangle;
	cout<<"Geometry Calculator\n\n";
	cout<<"1.Area of a circle\n";
	cout<<"2.Area of a rectangle\n";
	cout<<"3.Area of a triangle\n";
	cout<<"4.select something ";
	cin>>selection;
	
	
	switch(selection)
	{
		case 1:
			
		float r;
		
		cout<<"\nEnter radius of the circle=";
		cin>>r;
		
		area_circle=3.14*r*r;
		
		cout<<"\nThe area of the circle is="<<area_circle<<"\n";
			break;
		
		case 2:
			
		float length,width,area_rectangle;
		
		cout<<"\nEnter length of the rectangle ";
		cin>>length;
		cout<<"\nEnter width of the rectangle ";
		cin>>width;
		
		area_circle=length*width;
	    
		cout<<"The area of the rectangle is "<<area_circle<<endl;
		    break;
				
		case 3:
			
		double base,height,area_triangle;
		
		cout<<"\nEnter base of the triangle ";
		cin>>base;
		cout<<"\nEnter height of the tiangle ";
		cin>>height;
		
		area_triangle=base*height*0.5;
		
		cout<<"\nThe area of the triangle is "<<area_triangle<<endl;
			break;
				
		case 4:
		cout<<"\nExiting...";
			
		default:
		cout<<"\nYou entered a wrong number";				
	}
	return 0;
}


