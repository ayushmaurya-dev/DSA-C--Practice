class Solution {
public:
    /*Minute:       0   1   2   3   4   5   6   7
customers = [ 1,  0,  1,  2,  1,  1,  7,  5 ]
grumpy    = [ 0,  1,  0,  1,  0,  1,  0,  1 ]
              😊  😡  😊  😡  😊  😡  😊  😡
              */
int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes){
    int base = 0;
    for (int i = 0; i < customers.size(); i++){
        if (grumpy[i] == 0){
            base += customers[i];
        }
    }
    int sad = 0;
    for (int i = 0; i < minutes; i++){
        if (grumpy[i] == 1){
            sad += customers[i];
        }
    }
    int max_sad = sad;
    for (int i = minutes; i < customers.size(); i++){
        sad += customers[i] * grumpy[i];
        sad -= customers[i - minutes] * grumpy[i - minutes];
        max_sad = max(max_sad, sad);
    }
    return base + max_sad;
}
};