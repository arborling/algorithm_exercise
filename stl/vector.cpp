#include <iostream>
#include <vector>

using namespace std;

vector<int> myVector;

int main()
{
	for(int i = 1; i<= 5; i++)
		myVector.push_back(i);
	
	myVector.insert(myVector.begin(), 3 ,15);
	myVector.pop_back();

	for(int i = 0; i< myVector.size(); i++)
		cout << myVector[i] <<endl;
	
	cout << "vector size:" << myVector.size() << endl;

	myVector.erase(myVector.begin() + 5, myVector.end());

	
	for(int i = 0; i< myVector.size(); i++)
		cout << myVector[i] <<endl;

	vector<int>::iterator it;

	cout<< "iterator:" <<endl;
	for(it = myVector.begin(); it != myVector.end(); it++)
	{
		cout<< *it <<endl;
	}

	return 0;
	
}
