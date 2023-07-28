#include <iostream>
#include <vector>

using namespace std;

// Mang 2 chieu
//void nhap(int a[][100], int n, int m){
//	for(int i = 0; i < n ; i++){
//		for(int j = 0; j < m ; j++){
//			cin >> a[i][j];
//		}
//	}
//}
//
//
//int main(){
//	int n, m; cin >> n >> m; 
//	int a[100][100];
//	nhap(a, n, m);
//	
//	for(int i = 0; i < n ; i++){
//		for(int j = 0; j < m ; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//	return 0;
//}

//Mang 2 chieu co so luong phan tu tren hang khac nhau
int main(){
	int n; cin >> n; 
//	vector<int> a[n];
//	
//	for(int i = 0; i < n ; i++){
//		int m; cin >> m;
//		for(int j = 0; j < m ; j++){
//			int x; cin >> x;
//			a[i].push_back(x);
//		}
//	}
//	
//	for(int i = 0; i < n ; i++){
//		for(int j = 0; j < a[i].size() ; j++){
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}

	string a[n];
	cin.ignore(); //???
	for(int i = 0; i < n; i++){
		getline(cin, a[i]); //???
	}
	
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
	
	return 0;
}
