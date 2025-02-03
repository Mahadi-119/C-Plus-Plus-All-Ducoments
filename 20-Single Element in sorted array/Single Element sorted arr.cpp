#include <iostream>
#include <vector>
using namespace std;

            // This problem solution in Binary search It's Take Time complexity (logn);  
int searchSingleEl(vector<int>& arr){
    int n = arr.size();
    if(n==1) return arr[0]; 
    
    int st = 0, end = n-1;
        while(st<=end){
            int mid = st + (end - st)/2;

            if(mid == 0 && arr[0] != arr[1]) return arr[mid];
            if(mid == n-1 && arr[n-1] != arr[n-2]) return arr[mid];

            if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]){
                cout << arr[mid] << endl;
                return 0;
            }
                if(mid%2 == 0){ // Even number
                    if(arr[mid-1] == arr[mid]){
                        end = mid-1;
                    }else{
                        st = mid + 1;
                    }
                }else{
                    if(arr[mid-1] == arr[mid]){
                        st = mid + 1;
                    }else{
                        end  = mid - 1;
                    }
                }
        }
        return -1;
}
int main(){
    vector<int> arr = {1,1,2,2,3,3,4,5,5}; //Even Number
    vector<int> arr2 = {1,1,2,3,3,4,4}; // Odd Number
    searchSingleEl(arr2);
    return 0;
}