class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {

        // Find the maximum value in nums.
        // We'll only need arrays up to this value.
        int mx = *max_element(nums.begin(), nums.end());

        // freq[x] = how many times x appears in nums
        vector<long long> freq(mx + 1, 0);

        for (int x : nums)
            freq[x]++;

        // cnt[i] = number of elements divisible by i
        vector<long long> cnt(mx + 1, 0);

        // For every possible divisor i,
        // visit all its multiples and count their frequencies.
        for (int i = 1; i <= mx; i++) {
            for (int j = i; j <= mx; j += i)
                cnt[i] += freq[j];
        }

        // exact[i] = number of pairs whose GCD is exactly i
        vector<long long> exact(mx + 1, 0);

        // Process from largest GCD to smallest
        for (int i = mx; i >= 1; i--) {

            // Total pairs whose numbers are both divisible by i
            // = C(cnt[i],2)
            exact[i] = cnt[i] * (cnt[i] - 1) / 2;

            // Remove pairs whose GCD is actually a larger multiple of i
            // (Inclusion-Exclusion)
            for (int j = i * 2; j <= mx; j += i)
                exact[i] -= exact[j];
        }

        // prefix[i] = total number of pairs having GCD <= i
        vector<long long> prefix(mx + 1, 0);

        for (int i = 1; i <= mx; i++)
            prefix[i] = prefix[i - 1] + exact[i];

        vector<int> ans;

        for (long long q : queries) {

            // We need the q-th (0-indexed) element
            // So search for the first prefix >= q+1
            int g = lower_bound(prefix.begin() + 1,
                                prefix.end(),
                                q + 1) - prefix.begin();

            ans.push_back(g);
        }

        return ans;
    }
};