class MinStack {
public:
stack<int> s;
stack<int> mn;
    MinStack() {
    }
		void push(int value){
			s.push(value);
		}
		void pop(){
			if(s.empty())
			{
				return;
			}
			s.pop();
		}
		int top(){
			if(s.empty())
			{
				return -1;
			}
			return s.top();
		}
		int getMin(){
            if(s.empty())
            {
                return -1;
            }
			
			mn=s;
            int mi=mn.top();
			while(!mn.empty())
			{
			if(mi>mn.top())
			{
				mi=mn.top();
			}
			mn.pop();
		}
		return mi;
		  
    }
};
