class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        while(left<right)
        {
            int sums=numbers[left]+numbers[right];
            if(sums==target)
            {
                return {left+1,right+1};
                break;
            }
            else if(sums<target)
            {
                left++;
            }
            else{
                right--;
            }
        }
    }
};
