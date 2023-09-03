#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	stringstream ss(s);
	string r;
	getline(cin,r);
	string word;
	while(ss >> word){
		if(word != r) cout << word << " ";
	}
	
}
