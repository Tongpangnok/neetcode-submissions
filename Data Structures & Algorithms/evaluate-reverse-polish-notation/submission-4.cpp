class Solution {
    bool isOperator(string c)
{
	if(c=="+" || c=="*" || c=="/" || c=="-")
	{
		return true;
	}
	return false;
}
public:
    int evalRPN(vector<string>& tokens) {
    int ans=0;
	int left=0;
	int right=0;
	stack<int> s;
	for(int i=0;i<tokens.size();i++)
	{
		string r=tokens[i];
		if(!isOperator(r))
		{
			int temp=stoi(r);
			s.push(temp);
		}
		else{
		    right=s.top();
		    s.pop();
		    left=s.top();
		    s.pop();
		    if(r=="+")
		    {
		    ans=left+right;
			}
			if(r=="-")
		    {
		    	ans=left-right;
			}
			if(r=="*")
		    {
		    ans=left*right;
			}
			if(r=="/")
			{
		     ans=left/right;
			}
		    s.push(ans);
		}
	}
	return s.top();
    }
};
