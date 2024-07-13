#include <iostream>
using namespace std;

int main() {
	int n, row, col, no;
	cin >> n;
	for (row = 1; row <= n ; row++){
		no = row % 2;
		for (col = 1; col <= row ; col++){
			cout << no << "  " ;
			no = 1 - no ;
		}
		cout << '\n' ;
	}


   	return 0;
}