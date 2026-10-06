class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int start = 0;
    int end = 0;
    int current = 0;
    int min_len = INT_MAX;
    for(end;end<nums.size();end++){
        current += nums[end];
        if(current>=target){
            while(current>=target){
                min_len = min(min_len, end - start + 1);
                current -= nums[start];
                start++; 
            }
        }
    }
    if (min_len == INT_MAX) {
        return 0;
    } else {
        return min_len;
    }
}
};