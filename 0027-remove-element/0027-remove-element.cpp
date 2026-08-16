class Solution {
public:
    int removeElement(vector<int>&nums,int val){
    int e = (int)nums.size()-1;
    int i = 0;
    int count=0;
    while(i<nums.size() && i<=e){
        if(nums[e]!=val){
        if(nums[i]==val){
            swap(nums[i],nums[e]);
            e--;
        }
        else{
            count++;
            i++;
        }
    }
    else{
        e--;
    }
    }
    return count;
}
};