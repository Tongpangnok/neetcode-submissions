class MinStack {
public:
stack<int> s;
stack<int> mn;
    MinStack() {
    }
		void push(int value){
            s.push(value);
            if(mn.empty()||value<=mn.top())
            {
                mn.push(value);
            }
		}
		void pop(){
			if(s.empty())
			{
				return;
			}
            if(s.top()==mn.top())
            {
                mn.pop();
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

		
		return mn.top();
        
        }
};
