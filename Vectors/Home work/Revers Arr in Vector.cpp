#include <iostream>
#include <vector>
using namespace std;

void reversVec(vector <int>& nubers, int sz){
    int startVal = 0, endVal = sz-1;

    while (startVal < endVal){
        swap(nubers[startVal], nubers[endVal]);
        startVal++;
        endVal--;
    }
}
int main (){
    vector <int> nubers = {1,2,3,4,5,6,7,8};
    int size = 8;
    reversVec(nubers, size);

    for(int i=0; i<size; i++){
        cout << nubers[i] << " ";
        cout  << endl;
    }
    
    return 0;
}