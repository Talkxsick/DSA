class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int ans = 0;
        for(int bits = 0; bits < 32; bits++) {
            count = 0;
            for(int i = 0; i < n; i++) {
                if (nums[i] & (1<<bits)) {
                    count++;
                }
            }

            if (count % 3 == 1) {
                ans = ans | (1<<bits);
            }
        }    
        return ans;   
    }
};