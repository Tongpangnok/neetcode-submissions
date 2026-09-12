class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=0;
        int length2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
              length=0;
            }
            else{
                length++;
                length2=length;
            }
        }
        return length2;
    }
};