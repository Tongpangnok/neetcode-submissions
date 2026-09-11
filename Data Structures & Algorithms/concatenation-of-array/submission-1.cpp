class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int counter=1;
        vector<int> ans;
        while(counter<=2)
        {
        for(int i=0;i<nums.size();i++)
        {
        ans.push_back(nums[i]);
        }
          counter++;
        }
        return ans;
    }
};