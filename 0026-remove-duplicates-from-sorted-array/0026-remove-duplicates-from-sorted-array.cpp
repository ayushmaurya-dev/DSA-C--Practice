class Solution {
public:
    int removeDuplicates(vector<int>&nums){
    int w=1;
    int i=1;
    if(nums.empty()){
        return 0;
    }
    while(i<nums.size()){
        if(nums[i-1]!=nums[i]){
            nums[w]=nums[i];
            w++;
        }
        i++;
    }
    return w;
}
};