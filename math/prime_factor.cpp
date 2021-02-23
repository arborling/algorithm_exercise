//MATH 6.9
//Prime Factors

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int MAX = sqrt(1e9) + 1;
vector<int> prime;
bool isPrime[MAX];

void Initial()
{
	isPrime[0] = false;
	isPrime[1] = false;
	for(int i = 2; i< MAX; i++)
	{
		isPrime[i] = true;
	}

	for(int i = 2; i < MAX; i++)
	{
		if(!isPrime[i])
			continue;
		prime.push_back(i);
		for(int j = i * i; j < MAX; j+=i)
		{
			isPrime[j] = false;
		}
	}
	
}

int count(int x)
{
	if(x < 2)
		return 0;
	else if(x == 2)
		return 1;
	else
	{	int i = 0;
		int n = sqrt(x);
		bool sign = false;

		//cout << "sqrt:"<<n <<endl;
		while(prime[i] <= n && i < prime.size())
		{
			if(x % prime[i] == 0){
				sign = true;
				//cout << x << " " << prime[i] <<endl;
				break;
			}
			i++;
		}
		if(sign)
			return count(x/prime[i]) + 1;
		else
			return 1;
		
	}
	
}

int main()
{
	Initial();
	int x;
	while(cin >> x)
	{
		int number = 0;
		number = count(x);
		cout << number <<endl;
	}

	return 0;
}
