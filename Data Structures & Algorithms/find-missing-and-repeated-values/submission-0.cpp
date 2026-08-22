class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        const int n = grid.size();
        vector<int> ret(2);
        for(int i = 1; i <= n * n; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                for(int k = 0; k < n; k++) {
                    cnt += (grid[j][k] == i);
                }
            }
            if(cnt == 2) ret[0] = i;
            if(cnt == 0) ret[1] = i;
        }
        return ret;
    }
};