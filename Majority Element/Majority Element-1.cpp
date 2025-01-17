#include <iostream>
#include <vector>
using namespace std;

            // Majority Element problem solution in [Brouch force Aproch]
            
int majorityEl(vector<int>& nums){
    int n = nums.size();
    
    for(int val : nums){
        int frequnce = 0;

        for(int el : nums){
            if(el == val){
                frequnce++;
            }
        }
        if(frequnce > n / 2){
            return val;
        }
    } 
    return -1;
}
int main(){
    vector<int> nums={1, 1, 1, 3,4};


    cout << majorityEl(nums)  << endl;
    return 0;
}