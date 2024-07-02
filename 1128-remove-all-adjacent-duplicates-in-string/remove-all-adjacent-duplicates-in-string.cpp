class Solution {
public:
    string removeDuplicates(string s) {
        // This is a simple approach using erase function.
        // int i=0;
        // while(i<s.length()){
        //     if(s[i]==s[i+1]){
        //         s.erase(i, 2);
        //         i=0;
        //         continue;
        //     }
        //     i++;
        // }
        // return s;

        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(st.top()==s[i]){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        string ans = "";
        int n = st.size();
        for(int i = 0; i<n; i++){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};