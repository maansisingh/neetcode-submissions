class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> nums;
        for(int i = 1; i < numbers.size(); ++i) {
            for(int j = 1; j < numbers.size(); ++j) {
                if(numbers[i - 1] + numbers[j - 1] == target && i - 1 != j - 1) {
                    if(i - 1 < j - 1) {
                        nums.push_back(i);
                        nums.push_back(j);
                        return nums;
                    } else {
                        nums.push_back(j);
                        nums.push_back(i);
                        return nums;
                    }
                }
            }
        }
    }
};
