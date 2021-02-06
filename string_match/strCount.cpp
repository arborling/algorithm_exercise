#include <iostream>
#include <string>

using namespace std;

int main(){
	string str1, str2;
	while(getline(cin,str1)){
		if(str1 == "#")
			break;
		
		int number[5] = {0};
		getline(cin,str2);
		for(int i = 0; i < str2.size(); i++){
			for(int j = 0; j < str1.size(); j++)
				if(str2[i] == str1[j])
					number[j] ++;
		}
		for(int j = 0; j < str1.size(); j++)
			cout << str1[j]<< " "<< number[j] <<endl;
	}
	return 0;
}

