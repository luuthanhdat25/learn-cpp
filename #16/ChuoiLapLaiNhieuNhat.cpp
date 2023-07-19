#include <iostream>
#include <map>

using namespace std;

//Tu nao co so lan xuat hien nhieu nhat

//muiltimap - insert
//unordered_map

int main(){
	int n; cin >> n;
	map<string, int> mp;
	for(int i = 0; i < n; i++){
		string newString;
		cin >> newString;
		mp[newString]++;
	}
	
	int max = 0; string max_string;
	for(auto it: mp){
		if(it.second > max) {
			max = it.second;
			max_string = it.first;
		}
	}
	
	cout << max_string << " " << max;
}

//9
//python
//java
//string
//c++
//sql
//sql
//java
//java
//python

