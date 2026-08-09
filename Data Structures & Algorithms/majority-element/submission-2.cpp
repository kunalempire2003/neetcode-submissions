class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i:nums){
            ans[i]++;
        }
            int maxe=INT_MIN;
            int a=0;
        for(auto i: ans){
            if(i.second>maxe){
                maxe=i.second;
                a=i.first;
            }

        }

        return a;
        
    }
};