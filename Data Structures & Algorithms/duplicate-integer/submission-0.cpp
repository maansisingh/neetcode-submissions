class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> dups;
        for(int i: nums) {
            dups.insert(i);
            
        }

        if(dups.size() != nums.size()) {
                return true;
        } 
        return false;
        
    }
};