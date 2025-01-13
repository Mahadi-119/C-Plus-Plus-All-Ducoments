#include <iostream>
using namespace std;

// (Loops) Ar bitore arekta (Loops) Likle oy Loops ke bola hoy (Nested Loops)
// (if) ar bitore arekta (if stetment) Likle oy take bola hoy (Nested if stetment) 

int main ()
{
    int n = 10;
    for (int i=1; i<=n; i++){
        int m = 20;

        for (int i=1; i<=m; i++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}