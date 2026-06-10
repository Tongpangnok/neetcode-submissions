class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        	vector<int> si;
	        vector<int> em;
	
		int j=0;
		while(j<matrix.size())
		{
		int left=0;
		int right=matrix[0].size()-1;
		si=em;
		for(int i=0;i<matrix[0].size();i++)
		{
		si.push_back(matrix[j][i]);
	    }
		while(left<=right)
		{
			int mid=(left+right)/2;
			if(si[mid]==target)
			{
				return true;
				break;
			}
			else if(si[mid]>target)
			{
				right=mid-1;
			}
			else{
				left=mid+1;
			}
		}
		j++;
		
	}
	
	return false;

    }
};
