//timecomplexity is O(n log n)
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& nums) {

    sort(nums.begin(),nums.end());
                         

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

