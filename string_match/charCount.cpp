#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int number[26];


int main(){
	string str;

	int a=1;

	while(cin >> str){
		memset(number, 0,sizeof(number));
		for(int i = 0; i < str.size(); i++){
			if('A' <= str[i] && str[i] <= 'Z'){
				number[str[i] - 'A']++;
			}
		}
		for(int i = 0; i < 26; i++){
			cout <<(char)('A' + i) << ":" << number[i] <<endl;
			
		}

	}
	return 0;
}

