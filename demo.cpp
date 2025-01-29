#include <iostream>
#include <vector>
using namespace std;

vector<int> searchArr(vector<int>& a){ // It's take time complexity Leniear search [O(n)]
    int n = a.size(); 
    vector<int> storVal (1, -1);
    int end = n-2;
    for(int st=1; st<n-2; st++){
        int mid = st + (end-st)/2;
        if(a[mid-1] < a[mid] && a[mid] > a[mid+1]){
            storVal[0] = mid;
            return storVal;
        }
    }
    return storVal;
}
int main(){
    vector<int> arr={0,3,8,9,1,2};
    vector<int> storVal = searchArr (arr);
    for(int val : storVal){
        cout << val << endl;
    }
    return 0;
}