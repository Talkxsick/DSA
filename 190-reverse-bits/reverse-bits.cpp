class Solution {
public:
    int reverseBits(int n) {
        string r = bitset<32>(n).to_string();
        reverse(r.begin(),r.end());
        int ans = stoi(r,nullptr,2);
        return ans;
    }
};