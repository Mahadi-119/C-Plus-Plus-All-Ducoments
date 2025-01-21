#include<iostream>
#include<climits>
using namespace std;
int main (){
    int nums[]= {34, 24, 27, 52};
    int size = 4;
    int ckIndex;
    int smallestInd = INT_MAX;
    for(int i=0; i<size; i++){
        if (nums[i]< smallestInd){
            smallestInd = nums[i];
            ckIndex = i;
        }
    }
    cout << ckIndex << endl;
    return 0;
}