#include<iostream>
#include <string>

using namespace std;

void get_next(string str, int next[]){	//get next arrary
	int i = 1, j = 0;
	next[1] = 0;
	while(i < str.size()){
		if(j==0 || str[i] == str[j]){
			i++;
			j++;
			next[i] = j;
		}
		else{
			j = next[j];
		}
	}	

	for(int m=0;m <= str.size(); m++)
		cout << "next[" << m << "]: " << next[m] <<endl;
}

void get_nextVal(string str, int next[]){	//improvement
	int i = 1, j = 0;
	next[1] = 0;
	while(i < str.size()){
		if(j==0 || str[i] == str[j]){
			i++;
			j++;
			next[i] = j;
		}
		else{
			j = next[j];
		}
	}	

	int nextval[str.size()+1] = {0};
	
	for(int m =2; m <= str.size(); m++){
		if(str[next[m]-1] == str[m-1])
			nextval[m] = nextval[next[m]];
		else
			nextval[m] = next[m];
	}
	

	for(int m=0;m <= str.size(); m++)
		cout << "next[" << m << "]: " << next[m] <<endl;

	for(int m=0;m <= str.size(); m++)
		cout << "nextval[" << m << "]: " << nextval[m] <<endl;
}

int index_KMP(string s, string t){
	int i = 1, j = 1;
	int next[t.size()+1];
	get_nextVal(t,next);

	while(i <= s.size() && j<= t.size()){
		if(j == 0 || s[i-1] == t[j-1]){
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if(j > t.size())
		return i - t.size();
	else
		return 0;
}

/*
int index_KMP(string s, string t, int next[]){
	int i = 1, j = 1;
	while(i <= s.length && j<= t.length){
		if(j == 0 || s.ch[i] == t.ch[j]){
			i++;
			j++;
		}
		else
			j = next[j];
	}
	if(j > t.length)
		return i - t.length;
	else
		return 0;

}

*/

int main(int argc, char*argv[]){
	string str = "abcdkljsaabfg";
	string t = "aab";
	cout << index_KMP(str, t);

	return 0; 
}
