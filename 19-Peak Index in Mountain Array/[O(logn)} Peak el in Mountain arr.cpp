#include <iostream>
#include <vector>
using namespace std;
                //[PEAK ELIMENT'S] Mountain Array ar modde jay eliment's right and left dono pash thake bodo oy taka [PEAK Eliment's] bola // It's take Time complextiy [O(longn)]
int searchMnel(vector<int>& arr){
    int n = arr.size();
    int st = 1, end = n-2;
    while(st<=end){
        int mid = st+(end-st)/2;
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                cout << "Find out Mountain Eliment's : " << mid << endl;
                return 0;
            }
            if(arr[mid-1]<arr[mid]){
                st = mid+1;
            }else{
                end = mid-1;
            }
    }
    return -1;
}
int main(){
    vector<int> arr = {0,3,8,9,1,2};
    searchMnel(arr);
    return 0;
}