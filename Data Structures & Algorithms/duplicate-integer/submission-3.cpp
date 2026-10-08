class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> ans(nums.begin(),nums.end());
        if(ans.size() < nums.size()){
            return true;
        }else{
            return false;
        }
    }
};