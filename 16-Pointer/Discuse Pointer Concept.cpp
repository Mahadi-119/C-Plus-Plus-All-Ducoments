#include <iostream>
using namespace std;

            //Pointer
        //Pointer is a Special variables that store address of other variables
int main(){
    // int a = 10;
    // int* ptr = &a; // it is a pointer [ptr variable store address to other variable]
    // cout << ptr << endl;
    // cout << &a << endl;
    // cout << &ptr << endl;


                // Pointer to Pointer 
    // int** ptr2 = &ptr; // It is pointer to pointer
    // cout << ptr2 << endl;


                //Dereference Operator
            // [Dereference ater mane hosse Address ar upor jay valu ase oy valu bahir korar nieom ke bole]
    // int a =  10;
    // int* ptr = &a;
    // int** ptr2 = &ptr;
    // cout << *(a) << endl; // It is Dereference Example
    // cout << *(ptr) << endl; // It is Dereference Example
    // cout << **(ptr2) << endl; // It is Dereference Example


                // NULL Pointer
        // Null ar mane hosse khali ;
    int* ptr = NULL;
    cout << ptr << endl;
    return 0;
}