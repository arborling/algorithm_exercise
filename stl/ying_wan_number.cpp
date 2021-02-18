//VECTOR 5.1
#include <iostream>
#include <vector>

using namespace std;

vector<int> numberE;
vector<int> numberG;

int get(int num)
{	
	int res = 0;
	int temp = num;
	for(int i = 1;i <= temp; i++)
	{
		if(temp%i == 0 && i != num)
		{
			res += i;
		}
	}
	return res;
}

int main()
{
	for(int i = 2; i<= 60; i++)
	{
		cout << i << ":" << get(i) <<endl;
		if(i == get(i))
			numberE.push_back(i);
		else if(i < get(i))
			numberG.push_back(i);
	}

	vector<int>::iterator it;
	cout << "numberE: ";
	for(it = numberE.begin(); it !=numberE.end(); it++)
		cout << *it << " ";
	cout <<endl;
	cout << "numberG: ";
	for(it = numberG.begin(); it !=numberG.end(); it++)
		cout << *it << " ";
	cout <<endl;
	return 0;
}
