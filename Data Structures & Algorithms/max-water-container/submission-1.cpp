class Solution {
public:
    int maxArea(vector<int>& height) {

        int n = height.size();
        int l = 0, r = n -1, ans = 0;

        while(l < r){
            int w = r - l;
            int high = min(height[l], height[r]);
            int area = w * high;

            ans = max(ans, area);

            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};
