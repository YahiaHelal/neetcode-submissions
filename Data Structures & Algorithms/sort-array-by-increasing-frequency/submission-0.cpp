class Solution {
public:
    static bool cmp(const pair<int,int> &a, const pair<int,int> &b) {
        if(a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        vector<pair<int,int>> vec;
        map<int,int> freq;
        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }
        for(int i = 0; i < nums.size(); i++) {
            vec.push_back({nums[i], freq[nums[i]]});
        }
        vector<int> ret;
        sort(vec.begin(), vec.end(), cmp);
        for(int i = 0; i < vec.size(); i++) {
            ret.push_back(vec[i].first);
        }
        return ret;
    }
};