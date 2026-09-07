class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        
        int n = s.size();
        int maxlen = 0, maxfreq = 0, r = 0, l = 0;
        while(r < n){
            mp[s[r]]++;
            maxfreq = max(maxfreq, mp[s[r]]);

            while((r - l + 1) - maxfreq > k){
                mp[s[l]]--;
                if(mp[s[l]] == 0){
                    mp.erase(s[l]);
                }
                l++;
            }
            int len = r - l + 1;
            maxlen = max(maxlen, len);
            r++;
        }
        return maxlen;
    }
};
