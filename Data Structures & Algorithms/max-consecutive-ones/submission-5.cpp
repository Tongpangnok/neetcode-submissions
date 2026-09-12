class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int count=0;
        int i=0;
      while(i<nums.size()){
        while(nums[i]==1)
        {
           count++;
           if(i+1>=nums.size())
           {
            break;
           }
           i++;
        }
        maxi=max(maxi,count);
        count=0;
        i++;
      }
        return maxi;
    }
};