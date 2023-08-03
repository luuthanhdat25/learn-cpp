#include <iostream>
#include <map>

using namespace std;

bool nt(int n){
	if(n < 2) return false;
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n,m ; cin >> n >> m;
		int a[500][500];
		for(int i = 0; i<n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
			}
		}
		map<int, bool> mp;
		for(int i = 0; i<n; i++){
			for(int j = 0; j < m; j++){
				if(nt(a[i][j])){
					if(mp[a[i][j]] != true){
						cout << a[i][j] << " ";
						mp[a[i][j]] = true;
					}
				}
			}
		}
		
//		1
//		3 3
//		1 7 8
//		2 3 3
//		7 5 2
	}
	return 0;
}
