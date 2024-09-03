#include<bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
     for(i = 0;i<nums.size();i++)
     {
         for(j = i+1;j<nums.size();j++)
         {
             if(nums[i]+nums[j] == target)
             {
                 return{i,j};
             }
         }
     }
         return {-1,-1};
    }
};
//leetcode submit region end(Prohibit modification and deletion)
