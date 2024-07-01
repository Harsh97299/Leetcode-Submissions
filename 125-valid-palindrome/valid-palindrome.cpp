class Solution {
public:
    bool valid(char ch){
        if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9') ){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        string filtered;
        for(int i = 0; i<s.length(); i++){
            if(valid(s[i])){
                filtered += tolower(s[i]);
            }
        }
        int start = 0; 
        int end = filtered.length()-1;
        while(start < end){
            if(filtered[start++] != filtered[end--]){
                return false;
            }
        }
        return true;
    }
};