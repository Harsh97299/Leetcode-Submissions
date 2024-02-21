class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i = 0;
        int j = 0;
        while(i < word1.size() && j < word2.size()){
            merged.push_back(word1[i++]);
            merged.push_back(word2[j++]);
        }
        if(i != word1.size()){
            while(i<word1.size()){
                merged.push_back(word1[i++]);
            }
        }
        if(j != word2.size()){
            while(j<word2.size()){
                merged.push_back(word2[j++]);
            }
        }
        return merged;
    }
};