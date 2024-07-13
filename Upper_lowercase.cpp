#include<iostream>
using namespace std;
int main(){

char ch;
cin >> ch ;
if ( ch >= 'A' && ch <= 'Z'){
    cout << "Upper case" ;
}
else if ( ch >= 'a' && ch <= 'z'){
    cout << "Lower case" ;
}
    else {
        cout << "entered number isn't a alphabet" ;
    }



 return 0;
}