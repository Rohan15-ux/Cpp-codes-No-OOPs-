#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	/*
	char greet[6];
	cin>>greet;
	
	cout<<greet<<endl; //prints the whole string
	cout<<greet[4]<<endl; //prints character at index 4
	*/
	
	/*
	int len;
	char s1[]="chetry rohan";
	char s2[]="rohan";
	char s3[10];
	char* p; //or char *p to store the true or false value of strstr
	
	strcpy( s3, s1);
   	cout << "strcpy( s3, s1) : " << s3 << endl;

	
   // total lenghth of str1 after concatenation
   	len = strlen(s1);
   	cout << "strlen(s1) : " << len << endl;
	
	p=strstr(s1,s2); //returns the string when it finds it otherwise nothing is returned
	
	if(p) {
		cout<<"i love you"<<endl;
		cout<<p<<endl;    //char pointer so it directly prints the value it is storing
		cout<<*p<<endl;   // returns r as p gets dereferenced to print a single character   //*p is same as *(p+0)
	}
	else {
		cout<<"fuck off"<<endl;
		cout<<p<<endl;
	}
	
	// concatenates str1 and str2
   	strcat( s1, s2);
   	cout << "strcat( s1, s2): " << s1 << endl;
   	*/
   	
   	cout<<sizeof(string)<<endl;
   	
   	string s1;
   	string s2;
   	string s3;
   	
   	cout<<"s1: ";
   	cin>>s1;
   	cout<<endl;
   	
   	cout<<"s2: ";
   	cin>>s2;
   	cout<<endl;
   	
   	//copies s1 to s3
   	s3=s1;
   	cout<<s3<<endl;
   	
   	//finds length of s3
   	cout<<s3.size()<<endl;
   	
   	//concatenates s1 and s2
   	
   	cout<<s1<<" "+s2<<endl;
}
