//GREED 7.4

#include <iostream>
#include <algorithm>


using namespace std;
const int MAX = 1000;
struct tv
{
	int start;
	int end;
};

tv arr[MAX];

bool Compare(tv x, tv y)
{
	return x.end < y.end;
}

int main()
{
	int now = 0;
	int number;
	
	while(cin >> number)
	{
		if(number == 0)
			break;
		for(int i = 0; i < number; i++)
		{
			cin >> arr[i].start >> arr[i].end;
		}
		sort(arr, arr + number, Compare);
		int count = 0;
		for(int i = 0; i < number; i++)
		{
			if(arr[i].start >= now)
			{
				now = arr[i].end;
				count ++;
			}
		}

		cout << count <<endl;
	}

	return 0;
}
