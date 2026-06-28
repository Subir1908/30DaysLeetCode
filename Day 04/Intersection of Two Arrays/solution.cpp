class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_set<int> o1(nums1.begin(), nums1.end());
        std::unordered_set<int> o2(nums2.begin(), nums2.end());
        vector<int> result;
        for(int num:o2){
            if(o1.count(num)){
                result.push_back(num);
            }
        }
        return result;
    }
};