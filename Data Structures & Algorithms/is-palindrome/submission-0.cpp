class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size() - 1;
        string c = "";
        for(int i = n; i >= 0; i--){
            if(isalnum(s[i]))
                c+=tolower(s[i]);
        }
        string rev = c;
        reverse(rev.begin(), rev.end());

        return c == rev;
    }
};
