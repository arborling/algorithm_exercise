//MATH 6.10
//FAST POWER

#include <iostream>

using namespace std;

int FastPower(int a, int b)
{
	int answer = 1;
	while(b != 0)
	{
		if(b % 2 == 1)
		{
			answer *= a;
		}
		b /= 2;
		a *= a;
	}

	return answer;
}

int FastExponentioation(int a, int b, int mod)
{
	int answer = 1; 
	while(b != 0)
	{	
		if(b & 1)
		{
			answer *= a;
			answer %= mod;
		}

		b = b >> 1;
		a *= a;
		a %= mod;

	}
	return answer;
}

int main()
{
	int a, b;	//a>1 b <10000
	while(cin >> a >> b)
	{
		if(a == 0 && b == 0)
			break;
		//cout << FastPower(a, b) <<endl;	 
		cout << FastExponentioation(a, b, 1000) << endl;
	}

	return 0;
}
