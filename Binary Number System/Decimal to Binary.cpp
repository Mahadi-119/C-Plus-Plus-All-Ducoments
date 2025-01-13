#include<iostream>
using namespace std;

 // Math:- Decimal number system bole (Base 10 oo vole) EX:- 123456789;
 // Binary number system (Base 2 oo vole)EX:- 010101 

int decToBinary(int decNum){
    int ans = 0, power =  1;
    while (decNum >0){
        int reminder = decNum % 2;
        decNum /= 2;

        ans += (reminder * power);
        power *= 10;
    }
    return ans;
}


int main (){
    int decNum = 6;
    cout << decToBinary(decNum) << endl;
    return 0;
}