class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board.size();
        for(int i=0;i<n;i++)
        {
            set<char> s;
            for(char c:board[i])
            {
              if(c=='.')continue;
              if(s.find(c)!=s.end())
              {
                return false;
              }
              s.insert(c);
            }
        }
        for(int i=0;i<n;i++)
        {
             set<char> s;
            for(int j=0;j<n;j++)
            {
           
            char c=board[j][i];
            {
              if(c=='.')continue;
              if(s.find(c)!=s.end())
              {
                return false;
              }
              s.insert(c);
            }
            }
        }
        for(int startrow=0;startrow<n;startrow+=3)
        {
            for(int startcol=0;startcol<n;startcol+=3)
            {
                set<char> s;
                for(int i=startrow;i<startrow+3;i++)
                {
                    for(int j=startcol;j<startcol+3;j++)
                    {
                        char c=board[i][j];
                         if(c=='.')continue;
                         if(s.find(c)!=s.end())
                       {
                        return false;
                       }
                       s.insert(c);
                     }
                    }
                }
            }
        
        return true;
    }
};
