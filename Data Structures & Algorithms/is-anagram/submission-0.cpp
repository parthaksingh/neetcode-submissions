class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s1;
        unordered_map<char, int> t1;

        for(auto x: s){
            s1[x]++;
        }
        for(auto y: t){
            t1[y]++;
        }
        if(s1 == t1){
            return true;
        }else{
            return false;
        }
    }
};
