class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> a(nums.begin(), nums.end());

        nums.assign(a.begin(), a.end());

        return nums.size();
    }
};