#include<iostream>
using namespace std;
#define MAX 1000

class MyStack{
	int top;
public:
	int arr[MAX];
	MyStack(){
		top=-1;
	}
	void push(int x);
	int pop();	
};

/* The method push to push element into the stack */
void MyStack :: push(int x)
{
    // Your Code
    arr[++top]=x;
}

/*The method pop which return the element 
  poped out of the stack*/
int MyStack :: pop()
{
    // Your Code
    if(top ==-1)
        return -1;
    return arr[top--];
}

int main()
{
	class MyStack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	
	return 0;
}
