#include<iostream>
using namespace std;
int main() {
	int N,i,number;
	cin >> N;
	for(number=2; number<=N; number++){
		for(i=2;i<=number ; i++){
		if( number%i== 0){
			break;
		}
	}
	if(i==number){
		cout << number << endl ;
	}
	}
	
	return 0;
}

                //y code 2 number k bich prime print krne k liye h
// #include<iostream>
// using namespace std;
// int main(){
//     int n, i , a ,b ;
//     cin >> a >> b;
//     for ( int n=a; n<= b; n++){
//         int i ;
//         for ( i= 2; i<= n; i++){
//             if ( n % i == 0){
//             break;
//             }
//         }
 
//  if ( i == n){
//     cout << n << "  " ;
//  }
//     }   
//  return 0 ;
// }
    
