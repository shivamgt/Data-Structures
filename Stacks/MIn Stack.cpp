void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	    return true;
	return false;    
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.empty())
	    return true;
	return false;    
}

int pop(stack<int>& s){
	// Your code goes here
    s.pop();
}

int getMin(stack<int>& s){
	// Your code goes here
	int min=s.top();
	while(!s.empty())
	{
	    if(s.top()<min)
	      min=s.top();
	      s.pop();
	}
	return min;
}
