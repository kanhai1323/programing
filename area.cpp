#include<iostream>
using namespace std;
int area(int,int);
float area(int);
main()
{
	int r;
	cout<<"enter a redius of circle->";
	cin>>r;
	float A=area(r);
    cout<<"\narea of circle"<<A;
	int l,b,a;
	cout<<"\nentrar length and breight of ractaingle->";
	cin>>l>>b;
	a=area(l,b);
	cout<<"\narea of ractingle"<<a;
	
	
}

float area(int r)
{
	return(3.14*r*r);
}

int area(int l,int b)
{
	return(l*b);
}
