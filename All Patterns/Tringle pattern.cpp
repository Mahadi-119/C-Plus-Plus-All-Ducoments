#include <iostream>
using namespace std;
int main (){
    int n = 5;

            // PRACTICE WITH (*) ; OUTPUT:-
// * 
// * *
// * * *
// * * * *
// * * * * *
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<i+1; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

            // PRACTICE WITH (number); OUTPUT:-
// 1 
// 2 2
// 3 3 3
// 4 4 4 4 
// 5 5 5 5 5
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<i+1; j++){
    //         cout << (i+1) << " ";
    //     }
    //     cout << endl;
    // }

             // PRACTICE WITH (number);OUTPUT:-
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
    // for (int i=0; i<n; i++){
    //     for (int j=1; j<=i+1; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }


            // PRACTICE WITH (charecter);output:-
// A     
// B B   
// C C C 
// D D D D
// E E E E E
    // char ch = 'A';
    // for (int i=0; i<n; i++){
    //     for (int j=0; j<i+1; j++){
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }


        //PRACTICE WITH (Revese Tringle Pattern) output:-
// 1     
// 2 1   
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
        // for (int i=0; i<n; i++){
        //     for (int j=i+1; j>0; j--){
        //         cout << j << " ";
        //     }
        //     cout << endl;
        // }
        
        

          // PRACTICE WITH (Revers Charecter Tringle pattern) OUTPUT:-
// A 
// B A
// C B A
// D C B A 
// E D C B A
        // for (int i=0; i<n; i++){
        //     char ch = 'A'+i;
        //     for (int j=i+1; j>0; j--){
        //         cout << ch-- << " ";
        //     }
        //     cout << endl;
        // }
    

        //PRACTICE WITH (Floyd's Tringle Pattern)output:-
// 1 
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15 
        // int num = 1;
        // for (int i=0; i<n; i++){
        //     for (int j=0; j<i+1; j++){
        //         cout << num << " ";
        //         num++;
        //     }
        //     cout << endl;
        // }


        // PRACTICE WITH (Floyd's Charecter Tringle pattern)OUTPUT:-
// A 
// B C
// D E F
// G H I J 
// K L M N O
        // char ch = 'A';
        // for (int i=0; i<n; i++){
        //     for (int j=0; j<i+1; j++){
        //         cout << ch << " ";
        //         ch++;
        //     }
        //     cout << endl;
        // }
    
    return 0;
}