class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int counter = 0;

        for (int x : nums) {
            if (x == 1) {
                counter++;
                maxCount = max(maxCount, counter);
            } else {
                counter = 0;
            }
        }

        return maxCount;
    }
};
