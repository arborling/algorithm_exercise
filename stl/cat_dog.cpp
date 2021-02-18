//QUEUE 5.3
//IN:1 OUT:2
//CAT:<0 DOG:>0

#include <iostream>
#include <queue>

using namespace std;

typedef struct animal{
	int no;
	int order;
	//animal(int a, int b): no(a), order(b){}
	animal(int a, int b)
	{
		no = a;
		order = b;
	}

}animal;

int main()
{	
	int n, op ,no;
	queue<animal> cat;
	queue<animal> dog;


	cin >> n;	//number of opearation
	for(int i = 1; i <= n; i++)
	{
		cin >> op >> no;
		if(op == 1)
		{
			if(no > 0)
				dog.push(animal(no,i));
			else if(no < 0)
				cat.push(animal(no,i));
		}
		else if(op == 2)
		{
			if(no == 1 && !dog.empty())
			{
				cout << dog.front().no << " ";
				dog.pop();
			}
			else if(no == -1 && !cat.empty())
			{
				cout << cat.front().no << " ";
				cat.pop();
			}
			else if((!cat.empty() || !dog.empty()) && no == 0)
			{
				if(cat.front().order < dog.front().order)
				{
					cout << cat.front().no << " ";
					cat.pop();
				}
				else
				{
					cout << dog.front().no << " ";
					dog.pop();
				}
			}
		}
	}
	cout <<endl;

	return 0;
}
