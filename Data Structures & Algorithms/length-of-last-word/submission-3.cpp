class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int i;
        for( i=s.length()-1;i>=0;){
            if(s[i]!=' '){
            break;
            }
            i--;
        }

        while(s[i]!=' '){
            if(i==-1)break;
            count++;

            i--;
        }
        return count;
       
        
    }
};