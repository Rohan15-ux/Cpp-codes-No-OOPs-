#include <iostream>
using namespace std;

//scope is a region of the program 

/*
int main(){
	
	int a,b,c; //local variable declaration
	
	a=10; b=20; //actual initialisation
	
	c = (a+b);
	cout<<c<<endl ;
} */

int g=5; //global variable declarartion

/*
int main() {
	int a=10,b=20; //local var
	
	g=a+b;
	
	cout<<g<<endl;
	
} */

int main() {
	int g=10;
	
	cout<<g; //output=10 (local value is preferred and not global value)
}
