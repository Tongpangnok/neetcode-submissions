class Solution {
public:
    int trap(vector<int>& height) {
        	int maxwater=0;
	
	
	for(int i=0;i<height.size();i++)
	{
		int left=0;
		int right=height.size()-1;
		int maxleft=0;
	    int maxright=0;
	    int area=0;
	while(left<i)
	{
		if(maxleft<height[left])
		{
			maxleft=height[left];
		}
		left++;
		
	}
		while(right>i)
	{
		if(maxright<height[right])
		{
			maxright=height[right];
		}
		right--;
	}
		area=min(maxleft,maxright)-height[i];
		if(area<0)
		{
			continue;
		}
		maxwater+=area;
}
	return maxwater;
	
    }
};
