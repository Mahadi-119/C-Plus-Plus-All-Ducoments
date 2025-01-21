#include <iostream>
using namespace std;


int main(){
    int arr[] = {1,2,3,4,5};
    int sz = 5;    
    int sum = 0;
    for(int i=0; i<sz; i++){
        sum += arr[i];
    }
    cout << "Total Sum Of Arr : " << sum;
    cout << endl;
    return 0;
}