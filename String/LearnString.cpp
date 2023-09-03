#include <iostream>
#include <sstream>
using namespace std;
//cin >> s; // get the string before space
//cin.ignore(1);
//getline(cin, s); // get all line
//truy cap ky tu thong qua chi so
//length(), size()
//cin, getline()
// compare() hoac su dung toan tu so sanh
// sau co ki tu dau tien lon hon se lon hon
// string substr(a, b) tach string con tu string cha, a: index bat dau, b: so ky tu muon tach
//substr
//stoi (string to int)=> chuyen string thanh so 
//to_string() chuyen tu so sang chuoi
//stringstream
int main(){
	string s = "luu.thanh.dat";
	stringstream ss(s); // chuoi doi chuoi s thanh mot cai luong
	string tmp;
	while(getline(ss, tmp, '.')){
		cout <<  tmp << endl;
	}
	return 0;
}
