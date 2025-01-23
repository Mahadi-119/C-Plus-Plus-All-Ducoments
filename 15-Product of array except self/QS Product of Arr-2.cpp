#include <iostream>
#include <vector>
using namespace std;

                // This Code have used [O(n)Linear Time Complexity & [O(n) Space Complexity]]
int main(){
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    vector<int> ans (n, 1);

    //Prifix calculation [Prifix is Left Index of (i) in array]
    for(int i=1; i<n; i++){
        ans[i] = ans[i-1] * nums[i-1];
    }

    //Sufix calculation [Sufix is Right  index of (i) in Array]
    int sufix = 1;
    for(int i=n-2; i>=0; i--){
        sufix *= nums[i+1];
        ans[i] *= sufix;
    }


        // It's output Loop
    for(int val : ans ){
        cout << val << " " ;
    }
    cout << endl;

    return 0;
}