#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

    //    majorityEl problem solution in [sort funtion]
int majorityEl (vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int frequnce = 0, ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            frequnce++;
        }else{
            frequnce= 1;
            ans = nums[i];
        }
        if(frequnce>n/2){
            return ans;
        }
    }
    return ans;
}

int main(){
    vector<int> nums ={1,3,3,3,2,3,4};
    int result = majorityEl(nums);
    cout << "Majority Element : " << result << endl;
    return 0;
}