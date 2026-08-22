class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        stack<pair<int,int>> stk;
        int n = temps.size();
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
           while(stk.size() && temps[i] > stk.top().first) {
                ans[stk.top().second] =  i - stk.top().second;
                stk.pop();
            }
            stk.push({temps[i], i});
        }
        return ans;
    }
};
