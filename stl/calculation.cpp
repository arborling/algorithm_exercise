//STACK 5.6
//4 + 2 * 5 - 7 / 11
//425*+711/-
#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

stack<double> number;
stack<char> op;

int priority(char c)	//priority #,$,+-,/*
{
	if(c == '#')
		return 0;
	else if(c == '$')
		return 1;
	else if(c == '+' || c == '-')
		return 2;
	else
		return 3;
}

double getNumber(string str, int& index)
{
	double number = 0;
	while(isdigit(str[index]))
	{
		number = number * 10 + str[index] - '0';
		index++;
	}
	return number;
}

double calculation(double x, double y, char op)
{
	double result;
//	cout << "x:" << x << "    y: " << y << "    ";
	switch(op)
	{
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
	}
//	cout << result <<endl;
	return result;
}

int main()
{
	string str;
	
	while(getline(cin, str))
	{
		if(str == "0")
			break;

		int index = 0;
		double x = 0;
		double y = 0;
		
		str += '$';
		//cout << str <<endl;
		op.push('#');

		while(index < str.size())
		{
			if(str[index] == ' ')
				index++;
			else if(isdigit(str[index]))
			{
				number.push(getNumber(str, index));
			}
			else
			{
				if(priority(op.top()) < priority(str[index]))
				{
					op.push(str[index]);
					index ++;
				}
				else
				{
					y = number.top();
					number.pop();
					x = number.top();
					number.pop();
					number.push(calculation(x, y, op.top()));
					op.pop();
				}
			}
		}

		cout << number.top() <<endl;
		
		number.pop();
		while(!op.empty())
			op.pop();
	}
	return 0;
}
