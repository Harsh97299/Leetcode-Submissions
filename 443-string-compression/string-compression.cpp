class Solution {
public:
    int compress(vector<char>& chars) { 
        int i = 0;
        int n = chars.size();
        int ansIndex = 0;
        while(i<n){
            int j = i+1;
            int count = 0;
            while(j<n && chars[i] == chars[j]){
                j++;
            }
            count = j-i;
            chars[ansIndex++] = chars[i];
            if(count > 1){
                for(char c:to_string(count)){
                    chars[ansIndex++] = c;
                }
            }
            i=j;
        }
        return ansIndex;
    }
};