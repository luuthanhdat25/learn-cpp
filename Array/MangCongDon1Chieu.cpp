#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n, m; cin >> n; 
	int a[n + 1], b[n + 1] = {0}; // Luu vao vi tri mot de khong can check dieu kien b[0]
	for(int i = 1; i <= n ; i++){
		cin >> a[i];
		b[i] = a[i] + b[i - 1];
	}
	
//	for(int i = 1; i < n + 1; i++){
//		cout << b[i] << " ";
//	}

	int l, r; cin >> l >> r;
	cout << b[r + 1] - b[l] << endl;
	
//	6
//	2 3 8 6 4 1
	return 0;
}


