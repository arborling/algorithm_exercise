//MATH 6.2
//string 10 to 2
//string 2 to 10

#include <iostream>
#include <stack>
#include <string>
#include <vector>

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

string Multiple(string num, int x)
{
	int carry = 0;
	for(int i = num.size()-1; i>= 0; i--)
	{
		int current = (num[i] - '0') * x + carry;
		//cout << "multiple current:" << current <<endl;
		num[i] = current % 10 + '0';
		carry = current /10;
	}
	if(carry != 0)
		num =char(carry + '0')  + num;

	return num;
}

string Add(string num, int x)
{
	int carry = x;
	for(int i = num.size()-1; i>= 0; i--)
	{
		int current = num[i] - '0' + carry;
		//cout << "add current:" << current <<endl;
		num[i] = current % 10 + '0';
		carry = current / 10;
	}
	if(carry != 0)
		num =char(carry + '0')  + num;

	return num;
}

int main()
{
	string str;
	vector<int> binary;

	while(cin >> str)
	{	
		while(str.size() != 0)
		{
			int last = str[str.size() - 1] - '0';
			binary.push_back(last % 2);
			str = Divide(str, 2);
		}

		for(int i = binary.size()-1; i>=0; i--)
		{
			cout << binary[i] ;
		}
		cout << endl;
	
		string answer = "0";
		vector<int>::iterator it;
		for(it = binary.begin(); it != binary.end(); it++)
		{
			//cout << "answer:" << answer <<endl; 
			answer = Multiple(answer, 2);
			answer = Add(answer,*it);
		}
		cout << answer <<endl;
	}

	return 0;
}
