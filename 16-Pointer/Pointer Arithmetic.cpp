#include <iostream>
using namespace std;

            // Pointer Arithmetic
        // Increment(++) Descrement(--)
int main(){
    // int a = 10;
    // int* ptr = &a;
    // cout << ptr << endl;
    // ptr++; //Increment(++)
    // cout << ptr << endl;
    // ptr--; //Descrement(--)
    // cout << ptr << endl;


                // Add
    // int arr[] ={1,2,3,4,5};
    // cout << *(arr + 0) << endl; 
    // cout << *(arr + 1) << endl; 
    // cout << *(arr + 2) << endl; 

                // Subract Pointer
    int* ptr2;// For ex: 100; Memory Adders
    int* ptr1 = ptr + 2; //108;
    cout << ptr1 - ptr2 << endl; // output : 2;


            // Compare(<, <=, >, >=, ==, !=)
    // int* ptr1;
    // int* ptr2;
    // cout << ptr1 << endl;
    // cout << ptr2 << endl;
    // cout << (ptr1 < ptr2) << endl;
    int* ptr1;
    int* ptr2 = ptr1; 
    cout << (ptr1 == ptr2) << endl;// false // 1;
    cout << (ptr1 != ptr2) << endl; // true // 0;
    

    return 0;
}