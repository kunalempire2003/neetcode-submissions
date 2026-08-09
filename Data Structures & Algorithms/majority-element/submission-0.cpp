class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i:nums){
            ans[i]++;
        }
            int maxe=INT_MIN;
            int a;
        for(auto i: ans){
            if(i.second>maxe){
                maxe=max(maxe,i.second);
                a=i.first;
            }

        }

        return a;
        
    }
};