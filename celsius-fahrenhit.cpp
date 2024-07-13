#include<iostream>
using namespace std;
int main(){
   int i , initial_value , final_value , step , far , cel;
   cin >> initial_value>> final_value >> step ;
   far = initial_value;
    
   while (far <= final_value){
    // cel = ( 5 / 9) * (far - 32) int/int(5/9) = 0 to cel 0 ah jayega
    // cel = ( 5 / 9.0) * (far - 32) y b use kr skte h!!
    cel = 5 *( far - 32) / 9 ;
    cout << far << "  " << cel << endl;
    far = far + step;
    
   
   
   } 
return 0;

}




















// #include<iostream>
// using namespace std;
// int main(){
//     int initial_value, final_value,step,far,cel;
//     cin>>initial_value>>final_value>>step;
//     far=initial_value;
//     while(far<=final_value){
        
//         // cel=(5/9.0)*(far-32);
//         cel=5 * (far-32)/9;

//         cout<<far<<" "<<cel<<'\n';
//         far= far+step;
//     }
//     return 0;
// }