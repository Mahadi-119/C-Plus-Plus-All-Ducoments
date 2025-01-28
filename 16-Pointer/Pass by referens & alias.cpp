#include <iostream>
using namespace std;

// void chang(int a ){ // Ata hosse pass by valu
//     a = 20;
// }


                    // Pass by referens;
// void chang(int* ptr ){ // Ata hosse pass by referens using Pointer
//     *ptr = 20;
// }
// int main(){
//     int a = 10;
//     chang(&a);
//     cout << "inside main function : " << a << endl;
// }


                // pass by referens using alias
void chang(int &b ){ // Ata hosse pass by referens using alias
    b = 20;
}
int main(){
    int a = 10;
    chang(a);
    cout << "inside main function : " << a << endl;
}