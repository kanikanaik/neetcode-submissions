class Solution {
   public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;
        int n = height.size();
        vector<int> maxL(n);
        vector<int> maxR(n);
        int res = 0;

        
        maxL[0] = height[0];
        for (int i = 1; i < n; i++) {
            maxL[i] = max(maxL[i - 1], height[i]);
        }

        maxR[n - 1] = height[n-1];
        for (int i = n - 2; i >= 0; i--) {
            maxR[i] = max(maxR[i + 1], height[i]);
        }

        for (int i = 0; i < n; i++) {
            int waterLevel = min(maxL[i], maxR[i]);
            res += waterLevel - height[i];
        }
        return res;
    }
};
