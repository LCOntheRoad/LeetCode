/************************************************************************/
/* 思想是在栈中每一层都保留当前栈中剩下数值的最小值currentMin，如果push
一个值val，就判断该val与currentMin的大小                                */
/************************************************************************/

struct data
{
	int val;
	int min;
	data(){}
};

class MinStack {
public:
	void push(int x) {
		data temp;
		temp.val=x;
		if (myStack.empty())
		{
			currentMin=x;
		}
		if (x<currentMin)
		{
			temp.min=x;
			currentMin=x;
		}
		else
		{
			temp.min=currentMin;
		}

		myStack.push(temp);

	}

	void pop() {
		myStack.pop();
		if (!myStack.empty())
		{
			currentMin = myStack.top().min;
		}
		else
			currentMin=-1;
	}

	int top() {

		return myStack.top().val;

	}

	int getMin() {
		return currentMin;

	}
private:
	stack<data> myStack;
	int currentMin;
};