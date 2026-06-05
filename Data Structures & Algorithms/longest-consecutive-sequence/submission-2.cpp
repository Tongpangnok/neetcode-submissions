class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
	set<int> s;
	for(int n:nums)
	{
	s.insert(n);
}
vector<int> result;
for(int h:s)
{
	result.push_back(h);
}

int maxx=1;
int current_len=1;

for(int i=1;i<result.size();i++)
{
	int current_element=result[i];
	int previous_element=result[i-1];
	if(current_element-previous_element==1)
	{
		current_len++;
	}
	else
	{
	if(maxx<=current_len)	{
		maxx=current_len;
		current_len=1;
	}
		
	}
}
if(maxx<current_len)
{
	maxx=current_len;
}
    return maxx;    
    }
};
