class Solution {
public:
    int count(int n, map<int,int> &ans) {
        if(n == 0) return 1;
        if(n < 0) return 0;
        if(ans[n]) return ans[n];
        return ans[n] = count(n - 1, ans) + count(n - 2, ans);
    }
    int climbStairs(int n) {
        map<int, int> ans;
        return count(n, ans);
    }
};
