#include<iostream>
using namespace std;
class area1
{
	public:
		int l,b;
	
		int printarea()
		{
			cout<<"enter length and breight";
		    cin>>l>>b;
			
			cout<<l*b;
		}
		int printarea2();
};
int area1 ::printarea2()
{
	cout<<"enter length and bright";
	cin>>l>>b;
	cout<<l*b;
}
int main()
{
	area obj;
	obj.printarea();
	obj.printarea2();
}
