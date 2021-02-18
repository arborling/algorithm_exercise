#include <iostream>
#include <queue>

using namespace std;

queue<int> myQueue;

int main()
{
	cout << "the size of queue:" << myQueue.size() <<endl;
	for(int i = 0; i< 10; i++)
		myQueue.push(i);

	cout << "the size of queue:" << myQueue.size() <<endl;
	cout << "the front of queue:" << myQueue.front() <<endl;
	cout << "the back of queue:" << myQueue.back() <<endl;

	int sum = 0;
	while(!myQueue.empty())
	{
		cout << myQueue.front() <<endl; 
		sum+= myQueue.front();
		myQueue.pop();
	}
	
	cout << sum <<endl;
	if(myQueue.empty())
		cout<< "queue is empty" <<endl;

	return 0;
}
