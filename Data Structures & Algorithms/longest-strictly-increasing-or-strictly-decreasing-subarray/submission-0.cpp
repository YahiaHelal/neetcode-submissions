class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ret = 0;
        for(int i = 0; i < nums.size(); i++) {
           int cnt1 = 0;
           int cnt2 = 0;
           for(int j = i ; j + 1 < nums.size() && nums[j] > nums[j + 1]; j++) {
            cnt1++;
           }
           for(int j = i; j + 1 < nums.size() && nums[j] < nums[j + 1]; j++) {
            cnt2++;
           }
           ret = max(ret, max(cnt1, cnt2) + 1);
        }
        return ret;
    }
};