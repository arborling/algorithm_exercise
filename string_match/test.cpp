#include <iostream>

using namespace std;

void test(int next[]){
	for(int i = 0;i< 10; i++)
		next[i]= i;
}

int main(){
	int next[10] = {0};
	test(next);

	for(int i = 0;i< 10; i++)
		cout << next[i] << endl;
	return 0;
}
