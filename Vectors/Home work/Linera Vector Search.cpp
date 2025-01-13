#include <iostream>
#include <vector>
using namespace std;

int vecLinearSer(vector<int>& nums, int sz, int tart){
    int storVal = 0;
    for(int i=0; i<sz; i++){
        if(nums[i] == tart){
            storVal += nums[i];
        }
    }
    return storVal;
}
int main(){
    vector <int> nums = {2,3,5,2,1,3,65};
    int size = 7;
    int target = 65;

    int showVal = vecLinearSer(nums, size, target);
    cout << "Target Valu : " << showVal << endl;
    return 0;
}