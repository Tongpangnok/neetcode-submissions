class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
	vector<pair<int,int>> com;
	
	for(int i=0;i<position.size();i++)
	{
		com.push_back({position[i],speed[i]});
	}
	vector<double> time;
     sort(com.begin(),com.end(),[](pair<int,int> &a,pair<int,int> &b)
	 {
	 	return a.first>b.first;
	 });
     for(pair<int,int> n:com)
     {
     	time.push_back((double)(target-n.first)/n.second);
	 }
	stack<double> s;
	for(double m:time)
	{
		if(s.empty())
		{
			s.push(m);
		}
		else if(m>s.top())
		{
			s.push(m);
		}
		else{
			continue;
		}
	}
	return s.size();
    }
};
