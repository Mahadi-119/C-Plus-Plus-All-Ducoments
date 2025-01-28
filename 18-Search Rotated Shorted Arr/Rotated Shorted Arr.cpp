#include <iostream>
#include <vector>
using namespace std;

                // Search Rotated Sorted Array
            // It's take Time complexity [O(logn)]
int searchArr(vector<int>& arr, int target ){
    int n = arr.size();
    int st = 0, end = n-1;

    while(st<=end){
        int mid = st +(end-st)/2;
            if(arr[mid] == target){
                cout << "Target Eliment's Found : " << mid << endl;
                cout << end << endl;
                cout << st << endl;
                return 0;
            }
            if(arr[st] <= arr[mid]){ //Left Side in array //4,5,6,7,1,2,3
                if(arr[st] <= target && target <= arr[mid]){
                    end = mid-1;
                }else{
                    st = mid+1;
                }
            }else {
                if(arr[mid]<= target && target <= arr[end]){ // Right side in Array
                    st = mid+1;
                }else{
                    end = mid-1;
                }
            }
    }
    cout << "Target Eliment's Not Found" << endl;
    return 0;
}
int main(){
    vector<int> arr = {4,5,6,7,1,2,3};
    int target = 6; 
    searchArr(arr, target);
    return 0;
}