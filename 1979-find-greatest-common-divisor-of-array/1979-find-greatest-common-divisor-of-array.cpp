class Solution {
public:
    int findGCD(vector<int>& nums) {
        

        int max = *min_element(nums.begin(),nums.end());
        int min = *max_element(nums.begin(),nums.end());

        int ans = 0;
        ans = gcd(min,max);

        return ans;
    }
};