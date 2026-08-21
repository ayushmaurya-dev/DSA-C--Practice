class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int s=0;
    int c=numbers.size()-1;
        while(s<c){
            int sum = numbers[s]+numbers[c];
            if(sum>target){
                c--;
            }
            else if(sum<target){
                s++;
            }
            if(sum==target){
                return {s+1,c+1};
                s++;
                c--;
                
            }
        
        }
    return {};
    }
};