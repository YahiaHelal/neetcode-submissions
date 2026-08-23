class Solution {
public:
    int countSeniors(vector<string>& details) {
        // 13 - 15
        int cnt = 0;
        for(auto s: details) {
            char a = s[11];
            char b = s[12];
            if(a == '6'){
                if(b >= '1') cnt++;
            }else if(a > '6') {
                cnt++;
            }
        }
        return cnt;
    }
};