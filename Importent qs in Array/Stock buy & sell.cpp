#include <iostream>
#include <climits> 
#include <algorithm>
using namespace std;

int main(){
    int price[]={7,1,5,3,6,4};
    int n = sizeof(price) / sizeof(price[0]);


    int maxProfit = 0;
    int bestBuy = INT_MAX;

    for(int i=0; i<n; i++){
        if(price[i] > bestBuy){
        maxProfit = max(maxProfit, price[i]- bestBuy);
        }
        bestBuy = min(bestBuy, price[i]);
    }
    cout << "Best Buy In Market : " << maxProfit << endl;
    return 0;
}
