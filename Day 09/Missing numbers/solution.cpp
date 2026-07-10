class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int OSum=0, n=nums.size();
        int ESum=n*(n+1)/2;
        for(int i:nums){
            OSum+=i;
        }
        return ESum-OSum;
    }
};