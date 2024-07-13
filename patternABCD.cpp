#include <iostream>
using namespace std;
int main(){
  char ch;
  int n, row, i ;
  cin >> n;
  for (row = 1; row <= n ; row++){
    ch= 'A';
    for (i = 1; i<= n-row+1 ; i++){
        cout << ch << "  ";
        ch++ ;
    }
    ch--;
    for (i =1 ; i<= n- row +1; i++){
    cout << ch << "   " ;
    ch-- ;
    }
    cout << "\n";

  }
return 0;
}

  
