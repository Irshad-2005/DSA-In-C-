#include <iostream>
using namespace std;

class Stack
{
	// data member
public:
	int *arr;
	int size;
	int top;
	Stack(int size)
	{
		arr = new int[size];
		this->size = size;
		this->top = -1;
	}
	// member function
	void push(int data)
	{
		if (size == top + 1)
		{
			cout << "Stack OverFlow" << endl;
		}
		else
		{
			top++;
			arr[top] = data;
		}
	}
	void pop()
	{
		if (top == -1)
		{
			cout << "Stack underFlow" << endl;
		}
		else
		{
			arr[top] = 0;
			top--;
		}
	}
	bool isEmpty()
	{
		if (top == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	int getTop()
	{
		if (top == -1)
		{
			cout << "There are not elemene in stack" << endl;
		}
		else
		{
			return arr[top];
		}
	}
	int getSize()
	{
		return top + 1;
	}
};

int main()
{
	Stack s(5);
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        s.push(50);
        
	cout << s.getTop() << endl;
	s.pop();
	cout<<s.isEmpty()<<endl;
	cout<<s.getSize()<<endl;
	return 0;
}