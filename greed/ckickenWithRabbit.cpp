//GREED 7.1
//Chicken With Rabbit

#include <iostream>

using namespace std;

int main()
{
	int a;

	while(cin >> a)
	{
		int minimum = 0;
		int maxmum = 0;
		if(a % 2 == 0)
		{
			minimum = a / 4 + (a % 4) / 2;
			maxmum = a / 2;
		}
		cout << minimum << " "<< maxmum <<endl;
	}
	return 0;
}
