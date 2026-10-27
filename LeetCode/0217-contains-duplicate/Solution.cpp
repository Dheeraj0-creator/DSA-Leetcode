class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        int i;
        for( i = 0; i < nums.size(); i++){
          
            if(seen.count(nums[i])){
                return true;
            }
            else{
                seen.insert(nums[i]);
            }
        }
        
        return false;
    }
};