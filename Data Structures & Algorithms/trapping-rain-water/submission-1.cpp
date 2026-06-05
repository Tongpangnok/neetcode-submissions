class Solution {
public:
    int trap(vector<int>& height) {
        	int maxwater=0;
	
	vector<int>maxleft(height.size(),0);
    vector<int>maxright(height.size(),0);
	for(int i=0;i<height.size();i++)
	{
		int left=0;
		int right=height.size()-1;
	    int area=0;
	while(left<i)
	{
		if(maxleft[i]<height[left])
		{
			maxleft[i]=height[left];
		}
		left++;
		
	}
		while(right>i)
	{
		if(maxright[i]<height[right])
		{
			maxright[i]=height[right];
		}
		right--;
	}
		area=min(maxleft[i],maxright[i])-height[i];
		if(area<0)
		{
			continue;
		}
		maxwater+=area;
}
	return maxwater;
	
    }
};
