class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
	 int y=0;
     for(int i=0;i<k;i++)
     {
        y+=arr[i];
     }  
     int avg=y/k;
     int ans=0;
     if(avg>=threshold)
     {
     	ans++;
	 }
     for(int i=k;i<arr.size();i++)
     {
         y+=arr[i]-arr[i-k];
         int avg2=y/k;
         if(avg2>=threshold)
         {
         	ans++;
		 }
	 } 
     return ans;
    }
    
    
};