#include <iostream>
#include <stack>

using namespace std;

stack<int> myStack;

int main()
{
	for(int i = 0; i < 10; i++)
	{
		myStack.push(i);
	}
	cout << "Stack size:" << myStack.size() << endl;
	cout << "Stack top element:" << myStack.top() <<endl;

	while(!myStack.empty())
	{
		cout << myStack.top() << " ";
		myStack.pop();
	}
	cout << endl;

	return 0;
}
