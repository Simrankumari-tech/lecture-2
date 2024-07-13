#include <iostream> 
using namespace std;

int main(){
int n, i ;
cin >> n;
for( i= 2 ; i<= n; i++){
    if ( n% i == 0){
        break ;
    }
    }
    if (n== i){
        cout << " prime number " ;
    }
    else {
        cout << "not prime " ;
    }




return 0;
}