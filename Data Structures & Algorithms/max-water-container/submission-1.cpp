class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
		int maxx=0;
	    int i=1;
		int l=0;
		int r=n-1;
		while(l<r)
		{
			if(heights[l]<heights[r])
			{
				if(maxx<min(heights[l],heights[r])*(n-i)){
					maxx=min(heights[l],heights[r])*(n-i);
				}
				
				l++;
				i++;
			}
			else{
					if(maxx<min(heights[l],heights[r])*(n-i)){
					maxx=min(heights[l],heights[r])*(n-i);
					}
					
				r--;
				i++;
			}
		}
        return maxx;
    }
};
