#include <iostream>
using namespace std;

                // Binary search It's take Time Complexity [O(logn)] It's Too Much batter then Linear Search ..... Linaer Search take Time Complexity [O(n)]
int main(){
    int arr[] = {-1, 0, 3, 4, 5, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int st = 0, end = n-1, target = 12;
    while(st <= end){
        int mid = st+(end-st)/2;

            if(target > arr[mid]){ // 2nd half
                st = mid+1;
            }else if(target < arr[mid]){ // 1st half
                end = mid-1;
            }else{
                cout << "Target Eliments Found : " << mid << endl;
                return 0;
            }
    }
    return 0;
}