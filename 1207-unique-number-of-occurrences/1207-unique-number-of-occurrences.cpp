class Solution {
public:
    
void sortArray(vector<int>& arr, int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int occurence(vector<int>& arr,int size,vector<int>& freq){
    int count = 1  ;
    int i=0;
    while(i<size){
        if(i < size - 1 && arr[i] == arr[i + 1]) {
            count++;
        }
        else{
            freq.push_back(count);
            //update count
             count = 1;
        }
        i++;
    }
    return 0;
}
bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq; // Create the empty frequency vector here
        
        // Step 1: Sort the input array so duplicate numbers group up together
        sortArray(arr, arr.size());
        
        // Step 2: Extract the counts into our empty 'freq' vector
        occurence(arr, arr.size(), freq);
        
        // Step 3: Run your nested loop uniqueness validation on the populated frequencies
        int n = freq.size();
        int i = 0;
        while(i < n) {
            int j = 0;
            while(j < n) {
                if(i != j && freq[i] == freq[j]) {
                    return false; // Found duplicate occurrences!
                }
                j++;
            }
            i++;
        }
        return true; // All occurrences are unique
    }
};