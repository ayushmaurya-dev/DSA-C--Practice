class Solution {
public:
    bool isPalindrome(string s) {
    vector<int>arr;
    int x=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            x =  s[i]-'a'+'A'; 
        }
        else if(s[i]>='A' && s[i]<='Z'){
            x = s[i];
        }
        else if(s[i]>='0' && s[i]<='9'){
            x = s[i];
        }
        else{ 
            continue;
        }
        arr.push_back(x);
    }
    int st = 0;
    int e = arr.size()-1;    
    while(st<=e){
        if(arr[st]!=arr[e])
        return false;
        st++;
        e--;
        }
    return true;
}
};