class Solution {
public:
    int maxArea(vector<int> &height){
    int d, t, x;
    int s = 0, e = height.size() - 1;
    int max = 0;
    while (s < e){
        d = e - s;
        if (height[s] <= height[e]){
            x = height[s];
            s++;
        }
        else{
            x = height[e];
            e--;
        }
        t = x * d;
        if (t > max){
            max = t;
        }
    }
    return max;
}
};