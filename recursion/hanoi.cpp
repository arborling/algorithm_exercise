//Recursion 8.2
//Tower Of Hanoi


#include <iostream>

using namespace std;

int hanoi(int n)
{
	if(n == 1)
		return 1;
	else
		return 2*hanoi(n-1) + 1;
}

int main()
{
	int a;
	while(cin >> a)
	{
		cout << hanoi(a) <<endl;
	}

	return 0;
}
