#include <iostream>
#include <vector>
using namespace std;


 //checking git and git repo
bool isValid(vector<int>& arr, int n, int m, int maxAllowPage){
    int stu = 1, page = 0;

    for(int i=0; i<n; i++){
        if(arr[i] > maxAllowPage){
            return false;
        }

        if(page + arr[i] <= maxAllowPage){
            page += arr[i];
        }else{
            stu++;
            page = arr[i];
        } 
    }
    return stu > m ? false : true;
}
int searchBookAll(vector<int>& arr, int n, int m){ // O(LogN * n)
    if(m>n){
        return -1;
    }

    int sum = 0;

    for(int i=0; i<n; i++){ // O(n);
        sum += arr[i];
    }
    
    int ans = -1;
    int st = 0, end = sum;

    while(st<=end){
        int mid = st +(end-st)/2;
        if(isValid(arr, n, m, mid)){ // Left 
            ans = mid;
            end = mid-1;
        }else{ // Right
            st = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> arr = {2,1,3,4};
    int avilableBooks = 4 , minumamOfStudent = 2;
    cout << searchBookAll(arr, avilableBooks, minumamOfStudent) << endl;
    return 0;
}