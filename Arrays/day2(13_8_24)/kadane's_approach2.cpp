//approach 2 for kadane's algorithm
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maximum = 0; 
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
        if (sum > maximum) {
            maximum = sum;
    }
    if(sum < 0){
        sum = 0;
    }
        
    }
    return maximum;

}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

