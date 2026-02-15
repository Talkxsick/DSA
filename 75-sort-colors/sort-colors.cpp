class Solution {
public:
    void sortColors(vector<int>& nums) {
    vector<int> count = {0,0,0};
    for(auto x:nums)    count[x]++;
    int n = nums.size();
    int k = 0;
    for(int i = 0; i < 3; i++) {
        while(count[i]!= 0) {
            count[i]--;
            nums[k] = i;
            k++;
        }
    }
        
        return;
    }
};