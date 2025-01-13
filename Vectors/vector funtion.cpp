#include <iostream>
#include <vector>
using namespace std;

int main(){
            //Size
    // vector<int> vec = {'a', 'b', 'c'};
    // cout << "size = " << vec.size() << endl;
    // for(char val : vec){// for each loop
    //     cout << val << endl;
    // }


            // push_back
    vector<int> vec;
    vec.push_back(37); 
    vec.push_back(36); 
    vec.push_back(35); 
    cout << "size = " << vec.size() << endl;

    vec.pop_back(); //35

    vec.front();
    vec.back();
    vec.at(0);


    // for(int  val : vec){// for each loop
    //     cout << val << endl;
    // }
    return 0;
}