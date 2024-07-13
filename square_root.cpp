#include<iostream>
using namespace std;
int main(){
int n , i ;
cin >> n;
i= 0 ;
while ( i * i <= n){
    i = i + 1;
}
i = i-1 ;
cout << i ;
   return 0;
}