#include <iostream>
#include <vector>
using namespace std;
 /// STL(stanrd Tampalet Libery)

/// vector sytax
int main(){   
    // vector<int> vec ={1,2,3};
    // vector<int> vec(3,0); // Fist valu is size of vector and second valu;

    vector<int> vec = {'a', 'b', 'c'};
    for(char val : vec){// for each loop
        cout << val << endl;
    }
    return 0;
}