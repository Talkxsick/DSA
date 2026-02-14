class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> twosum;
        int complement;
        int n = nums.size();
        for(int i = 0 ; i < n; i++) {
            complement = target - nums[i];
            if( twosum.find(complement) != twosum.end()) {
                return vector<int>({twosum.at(complement),i});
            }
            twosum.emplace(nums[i],i);
        }
        return vector<int>({});
    }
};