//MATH 6.1
//10 to 2

#include <iostream>
#include <stack>

using namespace std;
stack<int> binary;

int main()
{
	int number;
	while(cin >> number)
	{	
		while(number != 0)
		{
			binary.push(number % 2);
			number /= 2;
		}

		while(!binary.empty())
		{
			cout << binary.top();
			binary.pop();
		}
		cout <<endl;
	}
	return 0;
}
