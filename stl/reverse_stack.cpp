//STACK 5.4
//Output Reverse of the sequence

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int num;
	long long temp;

	//stack<int> myStack;
	stack<long long> myStack;
	cin >> num;
	for(int i = 0; i < num; i++)
	{
		cin >> temp;
		myStack.push(temp);
	}

	while(!myStack.empty())
	{
		cout << myStack.top() << " ";
		myStack.pop();
	}
	cout << endl;

	return 0;
}
