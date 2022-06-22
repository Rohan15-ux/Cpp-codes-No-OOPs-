#include<iostream>
using namespace std;

/*
int main() {
	
	int i=17;
	double d=77.678;
	
	int &r=i;
	double &s=d;
	
	cout<<"Value of i: "<<i<<endl;
	cout<<"Value of r: "<<r<<endl;
	
	cout<<"Value of d: "<<d<<endl;
	cout<<"Value of s: "<<s<<endl;
}*/

double vals[]={ 10.1, 12.6, 33.1, 24.1, 50.0};

double& setValues(int i) {
	return vals[i];
}

int main() {
   	cout << "Value before change" << endl;
	for ( int i = 0; i < 5; i++ ) {
	    cout << "vals[" << i << "] = ";
		cout << vals[i] << endl;
	}
	   
	setValues(1) = 20.23; // change 2nd element
   	setValues(3) = 70.8;  // change 4th element
 
   	cout << "Value after change" << endl;
   	for ( int i = 0; i < 5; i++ ) {
      	cout << "vals[" << i << "] = ";
      	cout << vals[i] << endl;
   	}
}
