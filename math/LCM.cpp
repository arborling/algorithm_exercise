//MATH 6.6
//Least Common Multiple

#include <iostream>

using namespace std;

int GCD(int a, int b)
{
	if(b == 0)
		return a;
	else
		return GCD(b, a % b);
}

int main()
{
	int a, b;
	while(cin >> a >> b)
	{
		int mult = a * b;
		cout << mult / GCD(a,b) <<endl;
	}

	return 0;
}
