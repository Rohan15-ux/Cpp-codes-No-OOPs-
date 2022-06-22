#include <iostream>
using namespace std;

int main() {
	int a=5; //0101
	int b=2; //0010
	int c;
	
	/*
	cout<<a+b<<endl;
	cout<<a-b<<endl;
	cout<<a*b<<endl;
	cout<<a/b<<endl;
	cout<<a%b<<endl;
	cout<<a++<<endl;
	*/
	
	c = a&b;
	cout<<c<<endl;
	
	c = a|b;
	cout<<c<<endl;
	
	c = a^b;
	cout<<c<<endl;
	
	c = ~a;
	cout<<c<<endl;
	
	c = a>>b;
	cout<<c<<endl;
	
	c = a<<b;
	cout<<c<<endl;
	
}
