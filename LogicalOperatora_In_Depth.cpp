#include <iostream>
using namespace std;

int main() {

	int a = 0, b = 10;
	if ( a && ( b = b + 1)){ // 0 means false hota hai (agr 0 && ek sath h to)
		b = b + 1; // aage ka execute ni hota
	}
	else {
		a = a + 1;
	}
	cout << a << endl ; // 1
	cout << b << endl ; // 10

return 0;
}