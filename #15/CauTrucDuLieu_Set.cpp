#include <iostream>

#include <set>

using namespace std;
//Set
//O(log(n))
//insert
//size
//find tra ve iterator ma tro toi vi tri gia tri can tim kiem
//neu ko co thi se tra ve it.end(); la mot iterator ao de ket thuc vong lap
//count: kiem tra gia tri có ton tai trong set hay khong
//Erase
//Order

//Multiset <int> cho phep cac phan tu trung lap

//unordered_set: luu nhung phan tu rieng biet nhung ko trung lap
//O(1)
//O(n)
int main(){
//	set<int> s;
//	for(int i = 0; i < 10; i++){
//		s.insert(i);
//	}
//	cout << s.size() << endl;
//	if(s.count(5)){
//		cout << "Found";
//	}
//	for(int x: s){
//		cout << x << " ";
//	}
//	if(s.find(100) != s.end()){
//		cout << "Found" << endl;
//	}else{
//		cout << "Not Found!" << endl;
//	}		
//	s.erase(s.find(5)); // Co the xoa mot iterator hoac chinh gia tri can xoa	
//	for(int x: s){
//		cout << x << " ";
//	}
//	cout << endl;
//	cout << *s.begin() << endl;	
//	cout << *s.rbegin() << endl; // Reverse begin

//	int n; cin >> n;
//	set<string> s;
//	for(int i = 0; i < n; i++){
//		string x;
//		cin >> x;
//		s.insert(x);
//	}
//	
//	cout << s.size() << endl;
//	
//	for(auto st: s){
//		cout << st << " ";
//	}
//	return 0;	

//	multiset<int> ms = {1, 3, 1, 4, 4, 2, 3};
//	cout << ms.size() << " Count (1):" << ms.count(1) << endl;
//	ms.erase(4); // Xoa het tat ca gia tri trung lap
//	cout << ms.size() << endl; 
	
	//Cho mang co n phan tu va so nguyen k, doi voi moi day con Lien tiep CO chieu
	//In ra duoc phan tu Lon nhat trong day con do
	//10 3
	//1 2 3 1 4 5 1 8 9 10
	//Output
	//3 3 4 5 5 8 9 10
	int n, k;
	cin >> n >> k;
	int a[n]; for(int &x: a) cin >> x;
	set<int> s;
	for(int i = 0; i < k; i++){
		s.insert(a[i]);
	}
	
	for(int i = k; i < n; i++){
		cout << *ms.rbegin() << " ";
		s.erase(ms.find(a[i - k]));
		s.insert(a[i]);
	}
	
	cout << *ms.rbegin() << endl;
}
