class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;

        int first = nums[0];
        int last = nums[nums.size() - 1];

        ans = gcd(first,last);
        return ans;
        
    }
};