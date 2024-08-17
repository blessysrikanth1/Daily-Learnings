//best time to sell or buy stock
//time complexity is o(n)
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr) {
    int buy = arr[0];
    int profit = 0;
    int n = arr.size();
    for(int i = 0 ; i < n ; i++){
        if(arr[i]<buy){
            buy = arr[i];
        }
        else if(arr[i]-buy>profit){
            profit = arr[i]-buy;
        }
    }
    return profit;
}

int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}

