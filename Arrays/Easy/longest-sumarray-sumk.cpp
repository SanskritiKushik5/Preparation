#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxlen = 0;
    for(int i=0; i<a.size(); i++) {
        sum += a[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        long long rem = sum - k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len = i-preSumMap[rem];
            maxlen = max(maxlen, len);
        }
        if(preSumMap.find(sum) ==preSumMap.end())
            preSumMap[sum] = i;
    }
    return maxlen;
}
int longestSubarrayWithSumK(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.
    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n) sum += a[right];
    }
    return maxLen;
}
