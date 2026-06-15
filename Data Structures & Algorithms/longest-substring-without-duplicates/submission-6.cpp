class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int left=0;
     unordered_map<char,int> mp;
     int maxlength=0;
     for(int i=0;i<s.size();i++)
     {
        while(mp.count(s[i]))
        {
        mp[s[left]]--;
        if(mp[s[left]]==0)
        {
            mp.erase(s[left]);
        }
        left++;
        }
        mp[s[i]]++;
        maxlength=max(maxlength,i-left+1);
     }
     return maxlength;
    }
};
