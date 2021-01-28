#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int length(string str){  //debug
	return str.size();
}



int main(int argc,char *argv[]){
	string s = "hello world";
	cout << s[1] << endl;
	cout << length(s) << endl;
	return 0;
}
