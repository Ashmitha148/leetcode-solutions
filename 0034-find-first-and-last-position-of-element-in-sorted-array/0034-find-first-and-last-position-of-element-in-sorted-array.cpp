class Solution {
public:
int lower(vector<int> &nums,int target) {
    int low = 0,high = nums.size()-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(nums[mid]>=target) {
            high = mid-1;
        }
        else low = mid+1;
    }
     return low;
}
int upper(vector<int> &nums,int target) {
     int low = 0,high = nums.size()-1;
    while(low<=high) {
        int mid = (low+high)/2;
        if(nums[mid]>target) {
            high = mid-1;
        }
        else low = mid+1;
    }
     return low;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = lower(nums,target);
        int b = upper(nums,target);
        vector<int>v(2,-1);
        if((a<nums.size() && nums[a]== target) && nums[b-1]==target) {
           v[0]=a,v[1]=b-1;
        }
        return v;
    }
};