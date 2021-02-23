//MATH 6.4
//Conversion all


#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

string Multiple(string str, int x)
{
	int carry = 0;
	for(int i = str.size()-1; i>=0; i--)
	{
		int current = (str[i] - '0') * x + carry;
		str[i] = current % 10 + '0';
		carry = current / 10;
	}
	if(carry != 0)
	{
		str = char(carry + '0') + str;
	}

	return str;
}

string Divide(string str, int x)
{
	int remainder = 0;
	for(int i = 0; i<str.size(); i++)
	{
		int current = remainder * 10 + str[i] - '0';
		str[i] = current / x + '0';
		remainder = current % x;
	}
	int pos = 0;
	while(str[pos] == '0')
	{
		pos ++;
	}
	str = str.substr(pos);

	return str;
}

string Add(string str,int x)
{
	int carry = x;
	for(int i = str.size()-1; i>=0; i--)
	{
		int current = (str[i] - '0') + carry;
		str[i] = current % 10 + '0';
		carry = current / 10;
	}
	if(carry != 0)
	{
		str = char(carry + '0') + str;
	}

	return str;

}
int CharToInt(char ch)
{
	if(isdigit(ch))
		return ch - '0';
	else
		return ch - '0' - 7;
}

char IntToChar(int x)
{
	
	if(x < 10){
	//	cout<< "itoc" << char(x+ '0') << endl;
		return x + '0';
	}
	else{
	//	cout << "itoc"<<char(x+7+ '0') << endl;
		return x + '0' + 7;
	}
}

int StrToInt(string str)
{
	int number = 0;
	for(int i = 0; i<str.size(); i++)
	{
		number *= 10;
		number = number + str[i] - '0';
	}
	//cout << "str to int:" << number <<endl;
	return number;
}

string IntToStr(int number)
{
	string str = "";
	while(number != 0)
	{
		str = char(number % 10 + '0') + str;
		number /= 10;
	}
	//cout << "int to str:" << str <<endl;
	return str;
}

string AllToTen(string str, int x)
{
	string result = "0";
	for(int i = 0; i<str.size(); i++)
	{
		result = Multiple(result, x);
		result = Add(result,CharToInt(str[i]));
	}
	
	return result;
}

string TenToAll(string str, int x)
{
	stack<int> number;
	string result = "";
	if(x >= 10)
	{
		while(str.size() != 0)
		{
			int last = StrToInt(str);
			number.push(last % x);
			str = Divide(str, x);
		}
	}
	else{
		
		while(str.size() != 0)
		{
			int last = CharToInt(str[str.size() - 1]);
			//cout << "last:"<< last << "    " << last %x <<endl;
			number.push(last % x);
			str = Divide(str, x);
			//cout <<"str:"<<str <<endl;
		}
	}
	
	while(!number.empty())
	{
		result += IntToChar(number.top());
		number.pop();
	}

	return result;
}

int main()
{
	int number;
	string str = "1D";
	str = AllToTen(str, 16);
	cout <<str <<endl;
	str = TenToAll(str, 16);
	cout << str;
	return 0;
}
