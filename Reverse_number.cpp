#include<iostream>
using namespace std;
int main(){
int n , lastdigit;
cin >> n;
int reverse = 0;
for ( int i = 0; i<= n; i++){
    lastdigit= n % 10;
    reverse = reverse * 10 + lastdigit;
    n = n/ 10;
}
cout << "Reverse number is : " << reverse ;
return 0;
}