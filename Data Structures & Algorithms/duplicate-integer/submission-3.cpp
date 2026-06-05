class Solution {
public:
 bool hasDuplicate(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int n:nums)
    {
        mp[n]++;
    }
    for(auto x:mp)
    {
        if(x.second>1)
        {
            return true;
        }
    }
    return false;
 }
};