#include <iostream>
using namespace std;

int main ()
{
    int n = 5;

    // for (int i=1; i<=n; i++){ // This is Outer loop 

    //     for (int j=1; j<=n; j++){ // This is Inner Loop
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    for (int i=0; i<=n; i++){ // This is Outer loop 
        char ch = 'A';
        for (int j=1; j<=n; j++){ // This is Inner Loop
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}