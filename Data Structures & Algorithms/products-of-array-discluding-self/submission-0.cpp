class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefProd(n),suffProd(n),res(n);
        // int prodSum = 1;

        prefProd[0] = 1;
        for (int i = 1; i < n; i++) {
            prefProd[i] = nums[i -1] * prefProd[i -1]; 
        }

        suffProd[n -1] = 1;
        for (int i = n -2; i >= 0; i--) {
            suffProd[i] = nums[i +1] * suffProd[i + 1];
        }

        for(int i = 0; i< n; i++){
            res[i] = prefProd[i] * suffProd[i];
        }

        return res;
    }
};
