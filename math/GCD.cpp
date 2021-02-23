//MATH 6.5
//Greatest Common Divisor


#include <iostream>
#include <stack>

using namespace std;


int main()
{
	int a,b;
	while(cin >> a >> b)
	{
		int remainder;
		while(a != 0 && b != 0)
		{
			remainder = a % b;
			a = b;
			b = remainder;
		//	cout << a <<" " <<b <<endl;
		}
		cout << a << endl;
	}

	return 0;
}
