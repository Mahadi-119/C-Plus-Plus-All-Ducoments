#include <iostream>
#include <climits>
using namespace std;
            // Qs soulation in two pointer approch  [It's take Time Complexity [O(n)]]
int main(){
    int totalHeight[] = {1,8,6,2,5,4,8,3,7}; // Total given height of water;
    int n = sizeof(totalHeight) / sizeof(totalHeight[0]);

    int maxWater = 0;


    int leftSide = 0, rightSide = n-1;
    while(leftSide < rightSide){
        int width = rightSide - leftSide;
        int height = min(totalHeight[leftSide], totalHeight[rightSide]);
        int carrWater = width * height;
        maxWater = max(maxWater, carrWater);
        totalHeight[leftSide] < totalHeight[rightSide] ? leftSide++ : rightSide--;
    }
    cout << "Maximam Water : " << maxWater << endl;
    return 0;
}