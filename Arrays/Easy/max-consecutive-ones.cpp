class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                count++;
            }else{
                if(maxi<count) maxi = count;
                count=0;
            }
        }
        if(maxi<count) maxi = count;
        return maxi;
    }
    
};
