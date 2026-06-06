class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
	vector<int> result;
	for(int i=0;i<temperatures.size();i++)
	{
		int j=i+1;
		int count=1;
		while(j<temperatures.size())
		{
		int max=temperatures[j];
		if(temperatures[i]<max)
		{
		  result.push_back(count);
		  break;
		}
		else{
		j++;
		count++;
	    }
	}if(j>temperatures.size()-1)
	{
	    result.push_back(0);
	}
	}
    return result;
    }
};
