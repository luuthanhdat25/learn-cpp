
	
#include <iostream>

using namespace std;

int main(){
	int dx[8] = {-1, -1 , -1, 0 ,0, 1, 1, 1};
	int dy[8] = {-1, 0 , 1, -1 ,1, -1, 0, 1};
	int t; cin >> t;
	while(t--){
		int n, m; cin >> n >> m;
		int a[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) cin >> a[i][j];
		}
		
		int b[n][m];
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) {
				for(int k = 0; k < 8; k++){
					int imoi = i + dx[k], jmoi = j + dy[k];
					if(imoi >= 0 && imoi < n && jmoi >= 0 && jmoi < m){
						b[i][j] += a[imoi][jmoi];
					}
				}
			}
		}
		
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) {
				cout << b[i][j] << " ";
			}
			cout << endl; 
		}
		
	}
}
