class Solution {
public:
    // brute force 
    // better can be done by hashing all to 1 and 
    // left zero value will be the answer
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=i)
                return i;
        }
        return nums.size();
    }
    // optimal
    int missingNumber(vector<int>&a) {
        int N = a.size()+1;
        int xor1 = 0, xor2 = 0;

        for (int i = 0; i < N - 1; i++) {
            xor2 = xor2 ^ a[i]; // XOR of array elements
            xor1 = xor1 ^ (i+1); //XOR up to [1...N-1]
        }
        xor1 = xor1 ^ N; //XOR up to [1...N]

        return (xor1 ^ xor2); // the missing number
    }
};
