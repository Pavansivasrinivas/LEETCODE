class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> ch(strs.begin(), strs.end());
        set<string> seen;
        for (int i = 0; i < ch.size(); i++) {
            sort(ch[i].begin(), ch[i].end());
            seen.insert(ch[i]);
        }
        vector<vector<string>> ans;
        for(string i : seen) {
            vector<string> st;
            for (int j = 0; j < ch.size(); j++) {
                
                if (i == ch[j]) {
                    st.push_back(strs[j]); 
                }
            }
            ans.push_back(st);
        }
        return ans;
    }
};