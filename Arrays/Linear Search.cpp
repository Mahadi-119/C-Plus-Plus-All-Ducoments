#include <iostream>
using namespace std;
int linearSearch (int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]== target){
            return i;
        }
    }
    return -1;// Not Found The Valu
}
int main (){
    int arr[] = {1,2,3,5,65};
    int size=4;
    int target=65;

    int show = linearSearch(arr, size, target);
    cout << show << endl;
    return 0;
}