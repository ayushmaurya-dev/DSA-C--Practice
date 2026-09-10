class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int total_sum = 0;
        for(int i=0;i<nums.size();i++){
            total_sum += nums[i];
        }
        if(nums.size()==k){
            return (double)total_sum/k;
        }
        int current_sum = 0;
        for(int i=0;i<k;i++){
            current_sum += nums[i];
        }
        int max_sum = current_sum;
        for(int i=k;i<nums.size();i++){
            current_sum += nums[i];
            current_sum = current_sum - nums[i-k];
            max_sum = max(max_sum, current_sum);
        }

        return (double)max_sum/k;
    }
};