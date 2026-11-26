class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i; j < nums.size(); ++j) {
                if(nums[i] + nums[j] == target && i != j) {
                    if(i < j) {
                        indices.push_back(i);
                        indices.push_back(j);
                    } else {
                        indices.push_back(j);
                        indices.push_back(i);
                    }
                    
                }
            }
        }
        return indices;
    }
};
