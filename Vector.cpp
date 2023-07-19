#include <iostream>
#include <vector>

using namespace std;
//vector<data types> name_vector
//push_back(_)
//size()
//vector[index_number]
//travel by for with index
//travel by for each
//travel by interator
//vector<int> v
//vector<int> v(n)
//vector<int> v(v, value)
int main(){
	vector<int> v = {1,2,3};	
	v.push_back(10); // Day ve cuoi Vector
	v.push_back(30);
	v.push_back(40);
	cout << v.size() << endl;
	cout << v[0] << endl; //Phan tu dau
	cout << v[v.size() - 1] << endl; //Phan tu cuoi
	cout << v.back() << endl; //Phan tu cuoi
	
//	for(int i = 0; i < v.size(); i++)	{
//		cout << v[i] << " ";
//	}
//	
//	for(int c: v)	{
//		cout << c << " ";
//	}
//	cout << *(v.begin() + 2) << endl;
	int n; cin >> n;
//	vector<int> u(n); //Khai bao vector nhung da co san n phan tu v[n]
	vector<int> m(n, 100);
	for(int c: m){
		cout << c << " ";
	}
}
