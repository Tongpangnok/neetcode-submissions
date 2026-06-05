class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      
      
	  unordered_map<int,int> mp;
        vector<int> result;
        vector<int> result2;
        for(int m:nums)
        {
            mp[m]++;
        }
        vector<pair<int,int>> v(mp.begin(), mp.end());

sort(v.begin(), v.end(), [](const pair<int,int> &a, const pair<int,int> &b) {
    return a.second > b.second;
});

for (auto &n : v) {
    result.push_back(n.first);
}
		for(int i=0;i<k;i++)
		{
			result2.push_back(result[i]);
		}
        return result2;
}
    
};
