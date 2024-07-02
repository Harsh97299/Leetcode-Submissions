class Solution {
public:
    bool checkEqual(int a[26], int b[26]){
        for(int i = 0; i<26; i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        int count1[26] = {0};
        int window = s1.length();
        for(int i=0; i<window; i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        int count2[26] = {0};
        int i = 0;
        while(i<window){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        if(checkEqual(count1, count2)){
            return true;
        }
        while(i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;

            index = s2[i-window]-'a';
            count2[index]--;

            i++;
            if(checkEqual(count1, count2)){
                return true;
            }
        }
        return false;
    }
};