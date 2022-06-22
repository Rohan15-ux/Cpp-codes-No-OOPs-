#include <iostream>
using namespace std;

/*
int main() {
	
	auto int a; // auto storage class. By default for all local var.
	
	cout<<a;
} */


/*
int main() {
	
	static int count;  //static storage class
	
	count+=2;
	cout<<count<<endl;
	
	if(count==2) {
		count+=69;
	}
	
	cout<<count<<endl;
} */


int cp;
extern void cp_extern();

main() {
	cp=10;
	cp_extern();
	
}
