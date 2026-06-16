class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
      int sum=0;
        for(int i=0;i<customers.size();i++)
        {
            if(grumpy[i]==0)
            {
           sum+=customers[i];
            }
        }
   
        
        int profit=0;
        for(int i=0;i<minutes;i++)
        {
          if(grumpy[i]==1)
          {
            profit+=customers[i];
          }
        }
        int maxi=profit;
        for(int i=minutes;i<customers.size();i++)
        {
            if(grumpy[i]==1)
            {
                profit+=customers[i];
            }
            if(grumpy[i-minutes]==1)
            {
                profit-=customers[i-minutes];
            }
            maxi=max(maxi,profit);
        }
        return maxi+sum;
    }
};