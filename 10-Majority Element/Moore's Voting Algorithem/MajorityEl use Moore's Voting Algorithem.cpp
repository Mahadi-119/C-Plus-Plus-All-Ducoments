#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

    //    majorityEl problem solution in [Moore's Voting Algorithem]
int majorityEl (vector<int>& nums){
    int n = nums.size();

    int frequnce = 0, ans = 0;
    for(int i=0; i<n; i++){
        if(frequnce == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            frequnce++;
        }else{
            frequnce--;
        }
    }
    return ans;
}

int main(){
    vector<int> nums ={1,3,3,3,2,3,9};
    int result = majorityEl(nums);
    cout << "Majority Element : " << result << endl;
    return 0;
}