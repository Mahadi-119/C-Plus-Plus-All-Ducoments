#include <iostream>
using namespace std;
int main(){
        // Maximum Subarray Sum [Array ar Continuos Part ke Subarray Bole  ]
    int n = 5;
    int arr[n] = {1,2,3,4,5};

    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }    

    return 0;
}