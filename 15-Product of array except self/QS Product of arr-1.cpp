#include <iostream>
#include <vector>

using namespace std;

            // This Code have used [O(n^2) Time Complexity & [O(n) Space Complexity]]

vector<int> product(vector<int>& num) {
    int n = num.size();
    vector<int> totalProduct(n, 1); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                totalProduct[i] *= num[j];
            }
        }
    }

    return totalProduct;
}

int main() {
    vector<int> num = {1, 2, 3, 4}; 
    vector<int> totalProduct = product(num); 
    
    cout << "Sum Of Product : " M
    for (int val : totalProduct) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}

