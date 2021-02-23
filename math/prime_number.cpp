//MATH 6.7
//Prime Number

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x;
	while(cin >>x)
	{	
		int i;
		int n = sqrt(x);
		for(i = 2; i <= n; i++)
		{
			if(x % i == 0)
			{
				cout << "no" <<endl;
				break;
			}
		}
		if(i > n )
			cout << "yes" <<endl;
		
	}

	return 0;
}
