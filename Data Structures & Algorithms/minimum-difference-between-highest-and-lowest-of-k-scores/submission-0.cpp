class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
		
		int low=nums[0];
		int high=nums[k-1];
		int difference=high-low;
		int mini=difference;
		for(int i=k;i<nums.size();i++)
		{
			difference=nums[i]-nums[i-k+1];
			mini=min(difference,mini);
		}
		return mini;
    }
};