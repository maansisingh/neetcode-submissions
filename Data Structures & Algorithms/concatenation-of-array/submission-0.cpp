class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> end;
        for(int i: nums) {
            end.push_back(i);
        }

        for(int i: nums) {
            end.push_back(i);
        }
        return end;
    }
};