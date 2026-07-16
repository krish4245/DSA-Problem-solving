class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        vector<int> prefixgcd;
        int mx = 0;

        for(int x:nums){
            mx = max(mx,x);
            prefixgcd.push_back(gcd(x,mx));
        }

        sort(prefixgcd.begin(), prefixgcd.end());

        long long ans = 0;
        int i = 0;
        int j  =n-1;

        while(i<j){
            ans += gcd(prefixgcd[i],prefixgcd[j]);
            i++;
            j--;
        }
        return ans;
    }
};