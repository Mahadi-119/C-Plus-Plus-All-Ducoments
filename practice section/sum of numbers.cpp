#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int sum = 0;

    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout << "sum = " << sum << endl;

    return 0;
}