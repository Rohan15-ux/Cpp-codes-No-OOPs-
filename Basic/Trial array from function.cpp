#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int *getrandom() {
	
	static int arr[10];
	
	srand(time(0));
	
	for (int i=0; i<10; ++i) {
		arr[i]=rand();
		cout<<arr[i]<<endl;
	}
	
	return arr;
}

int main() {
	
	int *p;
	
	p=getrandom();
	
	for(int i=0; i<10; i++) {
		cout<<*(p+i)<<endl;
	}
	
	return 0;
}
