#include <iostream>
using namespace std;

int main() {

	int a = 3456, b = 16;
	if ( a && ( b = b + 1)){ 
		b = b + 1; 
    }
	else {
		a = a + 1;
	}
	cout << a << endl ; 
	cout << b << endl ; 

return 0;
}  