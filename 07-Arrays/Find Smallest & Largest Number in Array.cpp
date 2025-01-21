#include <iostream>
#include <climits>
using namespace std;
int main(){
    int number [] = {34, 24, 53, -54, 64};
    int size = 5;

    int smallest = INT_MAX; //কোন [Array] এর সব চেয়ে ছোট স্যাংখা বের  করার জন্য এটা ব্যবহার করা হয়।

    // for (int i=0; i<size; i++){
        if(number[i] < smallest ){
            smallest = number[i];
        }
        // smallest = min(number[i], smallest); // এটাও [if statement] এর মত কাজ করে।



    
    // int largest = INT_MIN; //কোন [Array] এর  সব চেয়ে বড় স্যাংখা বের ‍ করার জন্য এটা ব্যবহার  করা হয়।
    // for (int i=0; i<size; i++){
    //     smallest = min(number[i], smallest); // এটাও [if statement] এর মত কাজ করে।
    //     largest = max(number[i], largest); // এটাও [if statement] এর মত কাজ করে।
    // }
    // cout << "Smallest = " << smallest << endl;
    // cout << "largest = " << largest << endl;
    return 0;
}

