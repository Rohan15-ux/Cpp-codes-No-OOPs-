#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	/*
	//first 10 natural nos
	for (int i=1; i<=10; i++) {
		cout<<i<<endl;
	}
	return 0;
	*/
	
	/*
	//sum of first 10 natural nos
	int sum=0;
	for (int i=1;i<=10;i++) {
		sum+=i;
	}
	cout<<sum<<endl;
	*/
	
	/*
	//n terms and sum
	int a,sum=0;
	
	cout<<"Enter a number: ";
	cin>>a;
	
	for(int i=1; i<=a; i++) {
		sum+=i;
	}
	cout<<sum;
	*/
	
	/*
	//perfect numbers between 1 and 500
    int sum=0,j=1;
    for(int i=1; i<=500; i++)
    {
        for (j; j<=500;j++) {
            if(j<i && i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i) {
            cout<<i<<endl;
        }
        
        j=1;
        sum=0;
    }
    */
    
    /*
    //check a number is prime or not
    int n;
    cin>>n;
    bool flag=0;
    for (int i=2; i<n; i++)
    {
    	
		if(n%i==0) {
			flag=1;
		}
	}
	if (flag==1) {
		cout<<"The entered number is not prime number"<<endl;
	}
	else {
		cout<<"The entered number is a prime number"<<endl;
	}
	*/
	
	/*&
	//find prime nos within a range
	int a,b;
	cout<<"Start: ";
	cin>>a;
	cout<<"End: ";
	cin>>b;
	
	bool flag=0;
	
	cout<<"The prime nos between "<<a<<" "<<b<<" are:";
	
	for(a; a<=b; a++)
	{
		for(int j=2; j<=sqrt(a);j++)
		{
			
			if(a%j==0){
				
				flag=1;
			}
		}
		if(flag==0 && a!=1) {
			cout<<a<<" ";
			}
		flag=0;
	}
	*/
	
	/*
	//factorial of a number
	int a,fact=1;
	cin>>a;
	
	for(int i=a; i>=1;i--)
	{
		fact*=i;
	}
	
	cout<<"Factorial of "<<a<<" is "<<fact<<endl;
	*/
	
	// Last prime number before a given number
	int n;
	cin>>n;
	bool flag=0;
	for(int i=n-1; i>=1; i--) {
		for(int j=2; j<i; j++) {
			if(i%j==0) {
				flag=1;
			}
		}
		if(flag==0) {
			if(i==1) {
				cout<<"no prime number less than 2";
				break;
			}
			cout<<i<<" is the last prime number before "<<n<<endl;
			break;
		}
		flag=0;
	}
}
