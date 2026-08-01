class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i=0,j=nums.size()-1;
        int pos=nums.size()-1;
        while(i<=j && pos>=0){
            if(abs(nums[i])>abs(nums[j])){
                ans[pos]=nums[i]*nums[i];
                i++;
                pos--;
            }else{
                ans[pos]=nums[j]*nums[j];
                pos--;
                j--;
            }
        }
  return ans;
        
        
    }
};