#include <iostream>
using namespace std;

int main (){
    // int marks [5] //Arrays = //Initilization {99, 38, 45, 23, 64} 
    int marks [5] = {99, 38, 45, 23, 64};
    int size = 5;
    // Loops : 0 to size-1
    for (int i=0; i<size; i++){
        cout << marks[i] << endl;
    }
    return 0;
}