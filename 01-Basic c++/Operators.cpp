#include<iostream>
using namespace std;
int main ()
{  // Ata ke (Arihmetic Operators) {ay gola ke Binari Operators} oo vole EX:- This 
    // int a = 10, b= 5;
    // cout << "sum = " << (a+b) << endl;
    // cout << "difference = " << (a-b) << endl;
    // cout << "product = " << (a*b) << endl;
    // cout << "division = " << (a/b) << endl;
    // cout << "modulo = " << (a%b) << endl; // Ata ke (Remainder Operator) oo vola hoy 

    
    // Relational Operators(<, >, <=, >=, ==, !=) { Relation Operators Shabshamoy Boolean valu ke return kore}
    // cout << (4 < 5) << endl; // true -> 1;


    // Logical Operators (or(||), AND(&&), NOT(!))
    // cout << !(4 < 5) << endl; //Logical NOT(!) Ata condition ke reverce kora day;
    // cout << ((4 < 5)|| (3 < 2)) << endl; // Logical Or(||) jodi 2tar answer ar modde je kono akta answer true hole code run hoea jave;
    //  cout << ((4 < 5) && (3 < 2)) << endl;// AND (&&) jodi shab gola condition true hoy ta hole solbe. je kono akta false hole solve na ;


    // Unari Operators (a++, b--)
    int a = 10;
    // cout << a << endl;
    int b = a++;// (Kam, updating) potome (b) ar modde valu jave tarpo (a) ar modde valu jayvo {ata ke POST INCREMENT OPERATORS OO BOLE};
    // int b= ++a; // (updating, kam) potome (a) ar kaj hobe tarpor (b) ar kaj hove {ATA KE PRE ICREMENT OPERATORS OO BOLE};
    cout << b << endl;
    cout << a << endl;
    
    // int b= a--; // Decrement Operators
    // int b= --a;
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;

    return 0;
}