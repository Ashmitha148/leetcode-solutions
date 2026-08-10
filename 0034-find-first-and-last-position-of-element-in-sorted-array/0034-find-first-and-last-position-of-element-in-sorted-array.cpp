class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int b = upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        vector<int>v(2,-1);
        if((a<nums.size() && nums[a]== target) && nums[b]==target) {
           v[0]=a,v[1]=b;
        }
        return v;
    }
};