//time complexity is O(n)
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int mid = 0;   
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;

            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
}

int main()
{
    vector<int> nums = {0, 2, 1, 2, 0, 1};
    sortArray(nums);
    cout << "After sorting:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

