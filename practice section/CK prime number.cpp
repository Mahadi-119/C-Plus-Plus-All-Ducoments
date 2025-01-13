#include <iostream>
using namespace std;

int main ()
{
    int n = 14;
    bool isPime = true;
    // int num = isPime;
    for (int i = 2; i<=n-1; i++){
        if (n % i == 0){
            isPime = false;
            break;
        }
    }

    if (isPime == true){
        cout  << " is prime number \n";
    }else {
        cout <<" is non-prime number \n";
    }
    return 0;
}