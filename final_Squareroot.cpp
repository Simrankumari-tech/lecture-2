#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    float inc= 1;
    float ans;
     int current_precision = 0;
    while ( current_precision <= 3){
        while ( ans * ans <= n){
            ans = ans + inc;
    }
            ans = ans - inc;
        inc = inc/10;
        current_precision= current_precision +1;
}
cout << ans << endl;
    return 0;
}