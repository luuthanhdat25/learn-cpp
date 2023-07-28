#include <iostream>

using namespace std;

//prefix[i][j]: tong tat ca cac phan tu cua hcn bat dau tu hang 1
// ket thuc o hang i, bat dau tu cot mot, ket thuc o cot j
int main(){
	int n, m; cin >> n >> m; 
	int a[n + 1][m + 1], b[n+1][m + 1];
	for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            b[i][j] = 0;
        }
    }
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m ; j++){
			cin >> a[i][j];
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + a[i][j];
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m ; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	

	int c1, c2, h1,h2; cin >> h1 >> h2 >> c1 >> c2;
	cout << b[h2][c2] - b[h2][c1 - 1] - b[h1 - 1][c2] + b[h1 - 1][c1 - 1] << endl;
//	3 3
//	1	2	3	
//  4	5	6	
//  7	8	9	
	return 0;
}


