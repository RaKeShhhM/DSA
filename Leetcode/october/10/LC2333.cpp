
// class Solution {
// public:
//     long long minSumSquareDiff(vector<int>& nums1,
//                                vector<int>& nums2,
//                                int k1, int k2) {

//         long long k = 1LL * k1 + k2;

//         vector<long long> freq(100001, 0);
//         long long sumdiff = 0;
//         int maxi = 0;

//         for (int i = 0; i < nums1.size(); i++) {
//             int d = abs(nums1[i] - nums2[i]);

//             freq[d]++;
//             sumdiff += d;
//             maxi = max(maxi, d);
//         }

//         // All differences can become zero
//         if (k >= sumdiff) return 0;

//         // Greedily reduce largest differences
//         for (int d = maxi; d > 0 && k > 0; d--) {

//             long long moves = min(k, freq[d]);

//             freq[d] -= moves;
//             freq[d - 1] += moves;
//             k -= moves;
//         }

//         long long ans = 0;

//         for (int d = 1; d <= maxi; d++) {
//             ans += freq[d] * d * d;
//         }

//         return ans;
//     }
// };
