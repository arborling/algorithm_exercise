//GREED 7.2
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX = 1000;

struct JavaBean{
	double weight;
	double cost;
};

JavaBean arr[MAX];

bool Compare(JavaBean x, JavaBean y)
{
	return (x.weight / x.cost) > (y.weight / y.cost);
}

int main()
{
	int m,n;
	while(cin >> m >> n)
	{
		if(m == -1 && n == -1)
			break;

		for(int i = 0; i < n; i++)
		{
			cin >> arr[i].weight >> arr[i].cost;
		}
		sort(arr, arr + n, Compare);
		double answer = 0;
		for(int i = 0; i < n; i++)
		{
			if(m >= arr[i].cost)
			{
				m-= arr[i].cost;
				answer += arr[i].weight;
			}
			else
			{
				answer += arr[i].weight * (m / arr[i].cost);
				break;
			}
		}

		cout << answer << endl;
	}	

	return 0;
}
