class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
    int total =0;
    for(int i = 0; i < cardPoints.size(); i++){
        total += cardPoints[i];
    }
    if(k == cardPoints.size()){
        return total;
    }
        int w = cardPoints.size()-k;
        int current_sum = 0;
        for(int i=0;i<w;i++){
            current_sum += cardPoints[i];
        }

    int min_sum = current_sum;
    for(int i=w;i<cardPoints.size();i++){
        current_sum = current_sum + cardPoints[i];
        current_sum = current_sum - cardPoints[i-w];
        min_sum = min(min_sum, current_sum);
    }
    return total - min_sum;
}
};