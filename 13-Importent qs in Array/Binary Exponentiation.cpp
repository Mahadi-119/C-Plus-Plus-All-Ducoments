#include <iostream>
using namespace std;
int main(){
    double x = 3.534543, ans = 1;
    int n = 3; 
    long binarFrom = n;

    while(binarFrom > 0){
        if(binarFrom % 2 == 1){
            ans *= x;
        }
        x *= x;
        binarFrom /= 2;
    }
    cout << ans << endl;
    return 0;
}