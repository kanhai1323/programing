#include<iostream>
using namespace std;
class mca
{
	public:
	void add(int a,int b);
	void add(int a,int b,int c);
};
void mca :: add(int a,int b)
{
	int sum;
	sum = a+b;
	cout<<"sum is "<<a<< "and"<<b<<"is"<<sum<<endl;
}
void mca  ::add (int a,int b, int c)
{
	int sum;
	sum = a+b+c;
	cout<<"sum of"<<a<<"+"<<b<<"+"<<c<<"is"<<sum<<endl;
	
}
int main()
{
	mca obj1;
	obj1.add(15,25);
	obj1.add(15,25,35);
	
}
