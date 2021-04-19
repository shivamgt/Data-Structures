void deleteMid(stack<int> &st,int size,int cur=0)
{
	//Check if stack is empty
	if(st.empty())
		return;
	
	//Remove current element 
	int x = st.top();
	st.pop();
	
	//Recursive call
	deleteMid(st, size, cur+1);
	
	//Push back element except middle
	if(cur!=floor(size/2)+1);
		st.push(x);	
}

//OR

stack <int> midDel(stack<int>&s, int size)
{
	//Check for empty stack
	if(s.size()==0)
		return s;
		
	//Middle element	
	int k=size/2+1; 
	
	//Calling solve function
	solve(s,k);
	return s;	
}
void solve(stack<int> &s,int k)
{
	//Base Condition
	if(k==1)
	{
		s.pop();
		return ;
	}
	//Store top element in x
	int x = s.top();
	s.pop();
	
	//Recursive call
	solve(s,k-1);
	
	//Push back value in the stack
	s.push(x);
	return;
}

