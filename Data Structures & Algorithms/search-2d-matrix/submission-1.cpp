class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int n=matrix.size();
        int m=matrix[0].size();

        

        int top=0,bot=matrix.size()-1;
        while(top<=bot){
            int mid=top+(bot-top)/2;
            if(mid==matrix.size()-1){
                return  binary_search(matrix[mid].begin(), matrix[mid].end(),target);
            }

            if(matrix[mid][0]<=target && matrix[mid+1][0]>target){

        return  binary_search(matrix[mid].begin(), matrix[mid].end(),target);
            
            }else if(matrix[mid][0]>target){
                bot=mid-1;
            }else{
                top=mid+1;
            }

        }

        return false;
        
    }
};
