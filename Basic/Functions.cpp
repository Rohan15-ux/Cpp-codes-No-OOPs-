#include <iostream>
using namespace std;

/*
int max(int , int);
//functions
int main() {
	
	int a,b;
	cout<<"FirstNumber: ";
	cin>>a;
	cout<<"SecondNumber: ";
	cin>>b;
	
	cout<<max(a,b)<<" is greater"<<endl;  //actual parameters
	
	return 0;
}

int max(int n1, int n2){ //formal parameters
	
	if(n1>n2) {
		return n1;
	}
	else {
		return n2;
	}
}
*/

/*
//call by value 
int swap(int,int);
int main() {
	
	int a,b,d;
	cin>>a;
	cin>>b;
	
	cout<<"Before Swapping: "<<a<<" "<<b<<endl;
	
	swap(a,b); //call by value doesn't make any changes to the actual argument
	
	cout<<"After Swapping: "<<a<<" "<<b<<endl;
}

int swap(int a, int b) {
	
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	return a,b ;
}
*/

/*
call by pointer
void swap(int *x, int *y);
 int main() {
 	
 	int a,b;
 	cin>>a>>b;
 	
 	cout<<"Before Swapping: "<<a<<" "<<b<<endl;
 	
 	swap(&a,&b); //call by pointer makes changes to the actual argument
 	
 	cout<<"After Swapping: "<<a<<" "<<b<<endl;
 	
 }
 
 void swap(int *x, int *y)
{
 	int temp;
 	
 	temp=*x;
 	*x=*y;
 	*y=temp;
 	
 	return ;
}
*/

/*
//call by reference
void swap(int &x, int &y);

int main() {
	int a,b;
	cin>>a>>b;
	
	cout<<"Before Swapping: "<<a<<" "<<b<<endl;
	
	swap(a,b);
	
	cout<<"After Swapping: "<<a<<" "<<b<<endl;
}

void swap(int &x,int &y) {
	
	int temp;
	temp=x;
	x=y;
	y=temp;
	
	return;
}
*/
