//time complexity is O(2n)
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& nums) {

int count1=0, count2=0, count3=0;
        for(int i = 0 ; i < nums.size();i++){
             if(nums[i]==0){
                count1++;
             }
             else if(nums[i]==1){
                count2++;
             }
             else if(nums[i]==2){
                count3++;
             }
        }
        for(int i = 0; i < count1 ; i++){
            nums[i]=0;
                    }
      for(int i = count1; i < count1+count2 ; i++){
            nums[i]=1;
                    }  
       for(int i = count1 + count2; i < nums.size() ; i++){
            nums[i]=2;
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

