class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       priority_queue<pair<int,int>> pq; 
       int cnt = 0;
       for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == 0) cnt++;
        else pq.push({i, nums[i]});
       }
       for(int i = nums.size() - 1; i >= 0; i--) {
        if(cnt) {
            nums[i] = 0;
            cnt--;
        }else {
            nums[i] = pq.top().second;
            pq.pop();
        }
       }
    }

};