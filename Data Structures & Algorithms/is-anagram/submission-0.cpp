class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> sMap;
        map<char, int> tMap;

        if(s.size() != t.size()) {
            return false;
        }
        for(char c: s) {
            sMap[c]++;
        }

        for(char c: t) {
            tMap[c]++;
        }

       return sMap == tMap;
    }
};
