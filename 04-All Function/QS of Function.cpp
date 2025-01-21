#include<iostream>
using namespace std;

// int sumN (int n){
//     int sum = 0;
    

//     for (int i=1; i<=n; i++){
//         sum += i;
//     }

//     return sum;
// }


// int factorialN (int n){
//     int fac = 1;
    

//     for (int i=1; i<=n; i++){
//         fac *= i;
//     }

//     return fac;
// }

int sumOfint (int num){
    int digSum = 0;
    
    while (num > 0){
        int lastDig = num % 10;
        num /= 10;
        digSum += lastDig;
    }
    return digSum;
}

int factorial (int n){
    int fac = 1;
    for (int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}
int nCr (int n, int r){
    int fac_n = factorial(n);
    int fac_r = factorial(r);
    int fac_nmr = factorial(n-r);

    return fac_n/ (fac_r *fac_nmr);
}
int main (){
    int n = 8; int r = 2;
    cout << nCr (n, r);
    return 0;
}