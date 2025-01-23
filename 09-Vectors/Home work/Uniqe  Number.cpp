#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> nums = {3,4,3,4,5};
    int ans =0;
    
    for(int val : nums){
        ans = ans ^ val;
    }
    cout << "Uniqe Number : " << ans << endl;
    return 0;
}