#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//double getavg(int arr[], int size);
int *getrandom() {
	
	static int arr[10];
	
	srand(time(0));
	
	for (int i=0; i<10; ++i) {
		arr[i]=rand();
		cout<<arr[i]<<endl;
	}
	cout<<endl;
	return arr;  //returning the address of first value of the array arr
}

int main() {
	/*double avg;
	int arr[5];
	int ayy[4][3];*/
	
	int *p;
	
	cout <<"return array from function"<<endl;
	
	p=getrandom();
	
	for(int i=0; i<10; i++) {
		cout<<*(p+i)<<endl;
	}
	
	//single dimensional
	//cout<<"Single dimensional"<<endl;
	//cout<<endl;
	/*for(int i=0; i<5; i++) {
		cout<<"Enter "<<i<<" index element: ";
		cin>>arr[i];
	}*/
	/*
	for(int i=0; i<10; i++) {
		cout<<i<<"th index element: ";
		cout<<arr[i]<<endl;
	}
	
	//multidimensional
	cout<<"Multi dimensional"<<endl;
	cout<<endl;
	for(int j=0; j<4; j++) {
		for(int k=0; k<3; k++) {
			cout<<"Enter "<<j<<" "<<k<<" index element: ";
			cin>>ayy[j][k];
		}
	}
	
	for(int j=0; j<4; j++) {
		for(int k=0; k<3; k++) {
			cout<<j<<" "<<k<<"th index element: ";
			cout<<ayy[j][k]<<endl;
		}
	}*/
	
	/*
	int *p;
	p=arr;
	
	for(int i=0; i<10; i++) {
		
		cout<<arr[i]<<endl;
	}
	
	cout<<endl;
	cout<<"Pointer to an array"<<endl;
	
	cout<<"using p"<<endl;
	for(int i=0; i<10; i++) {
		cout<<*(p+i)<<endl;
	}
	
	cout<<"using arr"<<endl;
	for(int i=0; i<10; i++) {
		cout<<*(arr+i)<<endl;
	}
	*/
	
	/*
	//passing array as an argument
	avg=getavg(arr,5);
	
	cout<<"Average is "<<avg<<endl;
	*/
	return 0;
}

/*
double getavg(int arr[], int size) {
	double sum=0;
	double avg;
	for (int i=0; i<size; i++) {
		sum+=arr[i];
	}
	
	avg=sum/size;
	
	return avg;
}
*/


