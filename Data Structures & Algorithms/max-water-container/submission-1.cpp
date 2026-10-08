class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res = 0;
        // for (int i = 0; i < heights.size(); i++) {
        //     for (int j = i + 1; j < heights.size(); j++) {
        //         res = max(res, min(heights[i], heights[j]) * (j - i));
        //     }
        // }

        int l =0,r = heights.size() -1;
        while(l < r){
            int area = (r - l) * min(heights[l],heights[r]);
            res = max(res,area);

            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return res;
    }
};