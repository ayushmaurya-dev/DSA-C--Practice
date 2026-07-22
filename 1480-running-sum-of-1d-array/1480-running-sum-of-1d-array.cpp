class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Start from 1 because index 0 stays the same
        for (int i = 1; i < nums.size(); i++) {
            nums[i] = nums[i] + nums[i - 1];
        }
        
        return nums;
    }
};