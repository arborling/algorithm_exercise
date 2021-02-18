//STACK 5.5
//PARENTHESIS MATCH

#include <iostream>
#include <stack>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	string s;
	stack<char> str;

	getline(cin, s);
	string answer(s.size(), ' ');

	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] == '(')
			str.push(i);
		else if(s[i] == ')')
		{
			if(!str.empty())
				str.pop();
			else
				answer[i] = '?';
		}
	}
	
	while(!str.empty())
	{
		answer[str.top()] = '$';
		str.pop();
	}

	cout <<  s <<endl;
	cout << answer <<endl;

	return 0;
}
