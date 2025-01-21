#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
           //    Maxmimum Subarray Sum problem solurion in [Kadane's Algorithm ata  Hosse Subarray bahir korar Most Optimised poddoti]

    int n= 5;
    int arr[5] = {1,-2,3,4,5};

    int currSum = 0; 
    int maxSum = INT_MIN; 

    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "maxmam subarry sum = " << maxSum << endl;
    return 0;
}