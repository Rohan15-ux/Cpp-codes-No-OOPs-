#include <iostream>
using namespace std;

/*
int main() {
	
	int var1;
	int var2=5;
	int var3[10];
	
	cout<<&var1<<endl;
	cout<<&var2<<endl;
	cout<<&var3<<endl;
}*/

/*
int main() {
	
	int var=20;
	int *p;
	
	p=&var; //store address of var in pointer variable p
	
	cout<<var<<endl;  //prints value of var
	cout<<p<<endl;	  //prints address of var
	cout<<*p<<endl;	 //prints value of var
}*/

int main() {
	
	/*
	int var[3]={10,100,200};
	int *p;
	int i=0;
	*/
	//I N C R E M E N T E R
	//p=var;
	
	/*
	for(int i=0; i<3; i++) {
		cout<<"Address of "<< var[i]<<" :"<<p<<endl;
		cout<<"Value: "<<*p<<endl;
		p++;
	}*/
	
	//D E C R E M E N T E R
	/*
	p=&var[2];
	for(int i=3; i>0; i--) {
		cout<<"Address of "<< var[i]<<" :"<<p<<endl;
		cout<<"Value: "<<*p<<endl;
		p--;
	}
	*/
	
	//comparison using ==,<=, >=
	/*
	p=var;
	while(p<=&var[2]) {
		cout<<"Address of "<<i<<" :"<<p<<endl;
		cout<<"Value is: "<<*p<<endl;
		p++;
		i++;
	}*/
	
	/*
   for (int i = 0; i < 3; i++) {
      *var = i;    // This is a correct syntax
      //++var       // This is incorrect.
      cout<<*(var+i)<<endl;
   }*/
   
   /*
   //Array of pointers
   int *ptr[4];
   int  arr[4];
   
   for (int i=0; i<4; i++) {
   	cin>>arr[i];
   }
   
   for (int i=0; i<4; i++) {
   	ptr[i]=&arr[i];
   }
   
   for (int i=0; i<4; i++) {
   	cout<<ptr+i<<endl;
   }
   
   char *names[4]={"Rohan Chetry", "Rimpi Chetry", "Rinsina Chetry", "Rishav Chetry"};
   
   for (int i=0; i<4; i++) {
   	cout<<"Names: "<<*(names+i)<<endl;
   	cout<<"Address: "<<*names[i]<<endl;
   }*/
   
   /*
   //Pointer to pointer
   
   int var=30;
   int *ptr;
   int **pptr;
   
   ptr=&var;
   pptr=&ptr;
   
   cout<<var<<endl; //value of var
   cout<<*ptr<<endl; //value of var
   cout<<**pptr<<endl; //value of var
   
   cout<<&var<<endl; //address of var
   cout<<ptr<<endl; //address of var
   cout<<*pptr<<endl; //address of var
   
   cout<<&ptr<<endl;
   */
   int bal[5]={1,2,3,4,5};
   
   cout<<&bal[1]<<endl;
}
