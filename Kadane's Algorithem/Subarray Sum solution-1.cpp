#include <iostream>
#include <climits>
using namespace std;

int main(){
        // Maximum Subarray Sum [Array ar Continuos Part ke Subarray Bole  ]
    int n = 5;
    int arr[5] = {1,2,3,4,5};

         // এই পদ্ধতিতে Maximum Subarray Sum বের  করা কে  [Brute Force Approach] বলে।
    int maxSum = INT_MIN;
    for(int st=0; st<n; st++){
        int currSum = 0;
        for(int end=st; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }    
    cout << "max subarray sum = " << maxSum << endl;
    return 0;
}