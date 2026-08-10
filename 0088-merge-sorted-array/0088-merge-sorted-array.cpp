class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int p1 = m - 1;       
        int p2 = n - 1;      
        int p = m + n - 1;    

        while (p2 >= 0) {
            if (p1 >= 0 && arr1[p1] > arr2[p2]) {
                arr1[p] = arr1[p1];
                p1--;
            } else {
                arr1[p] = arr2[p2];
                p2--;
            }
            p--;
        }
    }
};