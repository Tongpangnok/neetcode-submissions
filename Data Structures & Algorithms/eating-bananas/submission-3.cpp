class Solution {
public:
int getHours(vector<int> piles,int k){
	int hours=0;
	for(int n:piles)
	{
         hours+=ceil((double)n/k);
	}
	return hours;

}
    int minEatingSpeed(vector<int>& piles, int h) {
       int left=1;
	   int right=*max_element(piles.begin(),piles.end());
	   int ans=right;
	   while(left<=right)
	   {
		int mid=(left+right)/2;
		if(getHours(piles,mid)<=h)
		{
			ans=mid;
			right=mid-1;
		}
		else{
			left=mid+1;
		}
	   }
	   return ans;
	}
};
