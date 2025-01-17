#include <iostream>
#include <vector>
using namespace std;

            // Return pair in sorted array with target sum;
            
vector<int> pairSum(vector<int>& nums, int target){
    vector<int> ans;
    int n = nums.size();
    
    int start = 0, end = n-1; // ay nieom ke bole  [2 pointer Aproch];
    while(start<end){
        int findSum = nums[start] + nums[end];
        if(findSum > target){
            end--;
        }else if(findSum < target){
            start++;
        }else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    int target = 6;
    vector<int> ans = pairSum(nums , target);
    cout << ans[0] << ", " << ans[1] << endl;
    return 0;
}