#include <string>
#include <cstdio>
#include <iostream>
using namespace std;

int length(string str){
	return str.size();
}

int str_print(string str){	//dev mode

}

int main(int argc,char *argv[]){
	string s = "hello world";
	cout << s[1] << endl;
	cout << length(s) << endl;
	return 0;
}
