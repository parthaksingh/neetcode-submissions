class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s1;

        for(auto x: nums){
            if(s1.count(x)){
                return true;
            }
            s1.insert(x);
        }
        return false;
    }
};