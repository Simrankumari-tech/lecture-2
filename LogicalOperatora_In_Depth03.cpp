#include<iostream>
using namespace std;
int main(){
int a = 1, b = 0;
if (a || (b = b + 1)){
    b= b + 1;
}
else {
    a = a + 1; 
}
cout << a << endl; //1
cout << b << endl ; //1
 return 0;
}