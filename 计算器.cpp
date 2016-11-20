#include<iostream>
using namespace std;
int main()
{
	double a=0.0;
	double b=0.0;
	double result;
	char operation=0;
	cout<<"please input oprand a:"<<"\n";
	cin>>a;
	cout<<"please input operation(only+-*/)"<<"\n";
	cin>>operation;
	cout<<"plrase input operand b:"<<"\n";
	cin>>b;
	switch(operation)
	{
	case'+':
		result=a+b;break;
	case'-':
		result=a-b;break;
	case'*':
		result=a*b;break;
	case'/':
		result=a/b;break;
	}
	cout<<"result="<<result<<endl;
	return 0;
}