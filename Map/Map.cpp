#include <iostream>
#include <map>

using namespace std;
//O(log(n))
// Luu du lieu kieu map<key, value> 
// key la duy nhat
// insert
// count
// find
// erase: xoa key la xoa ca value

int main(){
	map<int,string> mp;
	mp[5] = "Dat"; 
	mp.insert({3, "Bao"});
	cout << mp.size() << endl;
	
//	mp.insert({3, "Tu"});
//	cout << mp.size() << endl; 

//	for(pair<int, string> x: mp){
//		cout << x.first << " " << x.second<< endl;
//	}
//	
//	for(auto x: mp){
//		cout << x.first << " " << x.second<< endl;
//	}

	for(map<int, string>::iterator it = mp.begin(); it != mp.end(); ++it){
		cout << (*it).first << " " << (*it).second<< endl;
	}
	
//	if(mp.count(5) != 0){
//		cout << "Founded!" << endl;
//	}
	if(mp.find(5) != mp.end()){
		cout << "Founded!" << endl;
	}
	
	mp.erase(5); // Chi duoc xoa key
	cout << mp.size() << endl;
}
