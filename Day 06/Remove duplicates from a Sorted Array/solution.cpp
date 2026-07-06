class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> h;
        int p = nums[0];
        h.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i] == p){
                continue;
            }
            else{
                p = nums[i];
                h.push_back(nums[i]);
            }
        }
        nums = h;
        return h.size();
    }
};