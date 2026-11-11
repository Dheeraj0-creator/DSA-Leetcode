class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];
        for (int i = 0; i + 2 < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (abs(sum - target) < abs(closestSum - target)) 
                {
                    closestSum = sum;
                }

                if (sum == target)
                    return target;
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }
        return closestSum;
    }
        
};


