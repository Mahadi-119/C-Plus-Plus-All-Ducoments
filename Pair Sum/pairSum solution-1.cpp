#include <iostream>
#include <vector>
using namespace std;

            // Return pair in sorted array with target sum;
            
vector<int> pairSum(vector<int>& nums, int target){
    vector<int> ans;
    int n = nums.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
}
int main(){
    vector<int> nums={1,2,3,4};
    int target = 6;

    vector<int> ans = pairSum(nums , target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}