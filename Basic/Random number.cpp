#include <iostream>
#include <ctime>
#include <cstdlib>
 using namespace std;
 
 int main() {
 	int i;
 	
 	srand(time(0)); //using the current time
 	
 	/*since the time changes everytime so it proudces different output everytime we run it
 	If it is constant (srand(1)) then it will produce the same output each time.
 	*/
 	for(i=0; i<10; i++) {
	 	cout<<rand()<<endl;
	}
	
}
