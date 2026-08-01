class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int count=0;
        vector<int> temp;
        for(int i: nums){
            if(i==0)count++;
            else temp.push_back(i);
        }

        while(count!=0){
            temp.push_back(0);
            count--;
        }
        nums=temp;
        
    }
};