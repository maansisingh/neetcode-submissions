class Solution {
public:
    bool isPalindrome(string s) {
        string newStr = "";
        for(int i = 0; i < s.size(); ++i) {
            if(isalnum(s.at(i))) {
                newStr += std::tolower(s.at(i));
            }
        }
        string revStr = newStr;
        std::reverse(revStr.begin(), revStr.end());
        
        return revStr == newStr;
    }
};
