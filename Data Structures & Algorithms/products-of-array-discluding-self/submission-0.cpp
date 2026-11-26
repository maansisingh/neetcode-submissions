class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        vector<int> output;
            for(int i = 0; i < nums.size(); ++i) {
                for(int j = 0; j < nums.size(); j++) {
                    if(j != i) {
                        prod *= nums[j];
                    }
                }
                output.push_back(prod);
                prod = 1;
            }
            return output;
    }
};
