class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(int i=0;i<details.size();i++)
        {
            string s=details[i];
            string q=string(1,s[11]);
            string w=string(1,s[12]);
            string ages=q+w;
            int age=stoi(ages);
            if(age>60)
            {
                ans++;
            }
        }
        return ans;
    }
};