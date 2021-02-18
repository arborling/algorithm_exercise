#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void f(int a, int b)
{
	cout << "f" <<endl;
}

void (*p)(int a, int b);
int main()
{
	p = &f;
	cout << p <<endl;
	cout << *p <<endl;
	(*p)(4,5);
	return 0;
}
