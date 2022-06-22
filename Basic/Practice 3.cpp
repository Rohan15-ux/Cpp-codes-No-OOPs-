#include <iostream>
using namespace std;

/*Finding greatest element
int main() {
	int arr[5];
	int max=arr[0];
	
	for (int i=0; i<5; i++) {
		cout<<"Enter "<<i<<"th elemenet: ";
		cin>>arr[i];
	}
	for (int i=0; i<5; i++) {
		if(arr[i]>max) {
			max=arr[i];
		}
	}
	cout<<"Greatest element: "<<max<<endl;
}*/

/*Larget three element of an array
int main() {
	int arr[5];
	int first,second,third=INT_MIN;
	
	for (int i=0; i<5; i++) {
		cout<<"Enter "<<i<<"th elemenet: ";
		cin>>arr[i];
	}
	for (int i=0; i<5; i++) {
		if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
	}
	
	cout << "\nThree largest elements are: " <<first <<", "<< second <<", "<< third;
}*/


