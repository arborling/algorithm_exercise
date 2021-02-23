//MATH 6.2
//string 10 to 2

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string Divide(string num, int x)
{
	int remainder = 0;
	for(int i = 0; i < num.size(); i++)
	{
		int current = num[i] - '0' + remainder *10;
		remainder = current % x;
		num[i] = current / x + '0';
	}

	int pos = 0;
	while(num[pos] == '0')
		pos++;

	return num.substr(pos);

}

int main()
{
	string str;
	stack<int> binary;
	while(cin >> str)
	{
		while(str.size() != 0)
		{
			int last = str[str.size() - 1] - '0';
			binary.push(last % 2);
			str = Divide(str, 2);
		}

		while(!binary.empty())
		{
			cout << binary.top();
			binary.pop();
		}
		cout << endl;
	}

	return 0;
}
