//QUEUE 5.2
#include <iostream>
#include <queue>

using namespace std;



int main()
{
	int num, p, m;
	cin >> num >> p >> m;
	
	queue<int> children;

	for(int i = 1; i<= num; i++)
		children.push(i);

	for(int i = 1; i < p; i++)
	{
		children.push(children.front());
		children.pop();
	}
	

	while(!children.empty())
	{
		for(int i = 1; i < m; i++)
		{
			children.push(children.front());
			children.pop();
		}
		if(children.size() == 1)
			cout << children.front() << endl;
		else
			cout << children.front() << ",";
		children.pop();
	}

	return 0;
}
