class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
	 int y=0;
     for(int i=0;i<k;i++)
     {
        y+=arr[i];
     }  
     
     int ans=0;
     if(y>=threshold*k)
     {
     	ans++;
	 }
     for(int i=k;i<arr.size();i++)
     {
         y+=arr[i]-arr[i-k];
         if(y>=threshold*k)
         {
         	ans++;
		 }
	 } 
     return ans;
    }
    
    
};