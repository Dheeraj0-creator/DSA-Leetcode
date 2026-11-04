class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (string word : strs) {

            
            string str = word;
            sort(word.begin(),word.end());
            
            mp[word].push_back(str);
        }
        for (auto i : mp) {
            ans.push_back(i.second);
        }
        
        return ans;
    }
};