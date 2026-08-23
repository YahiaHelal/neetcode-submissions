class Solution {
public:
    int check(vector<int> &nums) {
        int cnt = 1;
        int mx = 1;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] < nums[i + 1]) {
                cnt++;
            }else {
                cnt = 1;
            }
            mx = max(mx, cnt);
        }
        return mx;
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        int mx = check(nums);
        reverse(nums.begin(), nums.end());
        mx = max(mx, check(nums));
        return mx;
    }
};