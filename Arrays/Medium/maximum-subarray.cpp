class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int max = 0;
        for(int i=0; i<nums.size(); i++)
        {
            max = max+nums[i];
            if(maxi < max)
                maxi = max;
            if(max < 0)
                max = 0;
        }
        return maxi;
    }
};
