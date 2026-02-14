class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long ans = 0;
        for(auto x : nums) ans ^= x;

        int diffBit = ans & (-ans);
        int b1 = 0;
        int b2 = 0;
        for(auto x : nums) {
            if (x & diffBit)    b1 ^= x;
            else    b2 ^= x;
        }
        vector<int> res = {b1,b2};

        return res;


    }
};