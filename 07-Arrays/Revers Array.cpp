#include <iostream>
using namespace std;

void reversaArray(int arr[], int sz){
    int start=0, end= sz -1;

    while(start< end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main (){
    // [2 pointer Afroch]
    int arr[] = {1,2,3,4,5};
    int size = 5;
    reversaArray(arr, size);
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}