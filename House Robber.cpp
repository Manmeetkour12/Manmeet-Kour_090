class Solution {
public:
    int rob(vector<int>& nums) {
   vector<int> ho(nums.size() + 1, -1);
ho[0] = 0;
ho[1] = nums[0];
    for(int i =2 ;i<= nums.size();i++)
    {
        ho[i] = max(nums[i - 1] + ho[i - 2], ho[i - 1]); 
    }
return ho[nums.size()];
    }
};
