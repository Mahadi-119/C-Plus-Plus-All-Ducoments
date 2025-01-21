#include <iostream>
#include <climits>
using namespace std;
                // it's take time complexity [O(n^2)]  
int main(){
    int totalHeight[] = {1,8,6,2,5,4,8,3,7}; // Total given height of water 
    int n = sizeof(totalHeight) / sizeof(totalHeight[0]);

    int maxWater = 0;


    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int width = j - i;
            int height = min(totalHeight[i], totalHeight[j]);
            int area = width * height;
            maxWater = max(maxWater, area);
        }
    }
    cout << "Maximam Water : " << maxWater << endl;
    return 0;
}