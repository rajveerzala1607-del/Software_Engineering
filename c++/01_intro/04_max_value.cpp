#include<iostream>
using namespace std;

int main()
{
	
	int a,b,c;
	 cout<<"Enter your A : ";
	 cin>>a;
	 
	cout<<"Enter your B : ";
	cin>>b;
	
	cout<<"Enter your C : ";
	cin>>c;
	
	if(a>b && a>c){
		cout<<"A is max : "<<a;
	}
	
	else if (b>c){
		cout<<"B is max :"<<b;
	}
	
	else{
		cout<<"C is max :"<<c;
	}
	
	return 0;
}
