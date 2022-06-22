#include <iostream>
using namespace std;

// use extern keyword if you are declaring the variable outside the main function
//extern int a,b;
int func(); // function declaration

int main(){
	
	cout<<"Function called"<<endl;
	int i = func();//function call
	
	
}

int func() {
	
	//function definition
	cout<<"Function defined"<<endl;
	return 0;
}
