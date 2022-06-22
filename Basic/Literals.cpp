#include <iostream>
using namespace std;

/*
int main() {
	
   cout << "Hello\tWorld\n\n";
   return 0;
   
} */

//-----------Using #define---------------
/*
#define length 10     // #define identifier value
#define width 5
#define newline '\n'

int main() {
	int area;
	
	area = length * width;
	cout<<area<<newline;	
}*/

int main() {
	const int length = 10;     // const type variable = value;
	const int width = 5;
	const char newline = '\n';
	
	int area=length*width;
	cout<<area;
}


