//MATH 6.8
//Prime Number 

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const int MAXN = 10001;
vector<int> prime;
bool isPrime[MAXN];

//simple
bool Judge(int x)
{
	if(x < 2)
		return false;
	
	int n = sqrt(x);
	for(int i = 2; i <= n; i++)
	{
		if(x % i == 0)
			return false;
	}

	return true;
}

void Initial()
{
	for(int i = 0; i < MAXN; i++)
	{
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;
	
	for(int i = 2; i< MAXN; i++)
	{
		if(!isPrime[i])
			continue;

		prime.push_back(i);
		for(int j = i * i; j < MAXN; j+=i)
		{
			isPrime[j] = false;
		}
	}
	
	return ;
}

int main()
{
	Initial();
	int n;
	while(cin >> n)
	{
		int i = 0;
		bool isOutput = false;

		while(prime[i] < n)
		{
			if(prime[i] % 10 == 1)
			{
				cout << prime[i] << " ";
				isOutput = true;
			}
			i++;
		}
		if(!isOutput)
			cout << -1 <<endl;
		else
			cout <<endl;
	}

	return 0;
}
