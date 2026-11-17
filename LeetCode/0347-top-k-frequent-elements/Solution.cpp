class Solution {

    static bool compare(pair<int,int> a, pair<int,int> b) {
        return a.second < b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        vector<pair<int, int>> arr;
        for (auto p : freq) {
            arr.push_back({p.first, p.second});
        }
        sort(arr.begin(), arr.end(), compare);
        
        vector<int> ans;
        for (int i = (int)arr.size() - 1; i >= (int)arr.size() - k; i--) {
            ans.push_back(arr[i].first);
        }
        return ans;
    }
};