class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg, ans;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0)
                pos.push_back(nums[i]);
            else 
                neg.push_back(nums[i]);
        }
        for(int i=0; i<nums.size()/2; i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};
// better saving space
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos = 0;
        int neg = 1;
        int n = nums.size();
        vector<int> ans(n, 0);
        for(int i=0; i<n; i++) {
            if(nums[i]>0){
                ans[pos] = nums[i];
                pos += 2;
            } else {
                ans[neg] = nums[i];
                neg += 2;
            }
        }
        return ans;
    }
};
