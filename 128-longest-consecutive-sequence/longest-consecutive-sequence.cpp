class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        int cnt = 0;
        int longest = 0;
        if(n==0)    return 0;
        for(auto x: nums) s.emplace(x);

        for(auto x: s) {
            if(s.find(x-1) == s.end()) {
                cnt = 1;
                while(s.find(x+1) != s.end()) {
                    x = x+1;
                    cnt++;
                }
            }
            longest = max(longest,cnt);
        }

        return longest;
    }
};