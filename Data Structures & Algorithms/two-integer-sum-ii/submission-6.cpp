class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        // for(int i =0; i < n; i++){
        //     for(int j = 0; j <n; j++){
        //         if(i < j && i != j && numbers[i] + numbers[j] == target){
        //             return {i +1,j +1};
        //         }
        //     }
        // }
        // return {-1,-1};

        for (int i = 0; i < n; i++) {
            int l = i +1, r = n - 1;
            int tmp = target - numbers[i];
            while (l <= r) {
               int mid = l + (r - l) / 2;
                if (numbers[mid] == tmp) {
                    return {i + 1, mid + 1};
                } else if (numbers[mid] < tmp) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        return {};
    }
};
