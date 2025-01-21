#include<iostream>
using namespace std;
// Type Casting Hosse ( Converting data from one type to Another)
// Type Casting 2pokar {1.Convession 2.type-casting}
// 1.Convession hosse jeta Compailar Auto Matik convert Kore dey;
// 2.Type-casting hosse jeta programer nije convert korte pare(Generali Type-casting vebohar kora hoy {BIG DATA TYPE KE SMALL DATA TYPE A CONVERT KORAR JONNO BAVOHAR HOY} )
int main ()
{
    // char grad = 'a'; //(Convession) {char Data type convert to intizer data type } EX:- This
    // int value = grad;
    // cout << value << endl;

    double price = 100.99;// (Type casting)Big data type convert to small data type 
    int newprice = (int)price;
    cout << newprice << endl;
    return 0;
}
