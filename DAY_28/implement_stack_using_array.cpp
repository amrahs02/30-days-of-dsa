void MyStack :: push(int x)
{
    arr[top]=x;
    top++;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{     
    if(top==-1) return -1;
    
    top--;
	return arr[top];
}