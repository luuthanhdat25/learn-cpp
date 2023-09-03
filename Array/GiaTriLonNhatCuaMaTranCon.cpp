#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n][n], cheochinh[n + 1][n + 1] = {0}, cheophu[n + 1][n + 1] = {0};
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			cheochinh[i + 1][j + 1] = a[i][j];
			cheophu[i + 1][j] = a[i][j];
		}
	}
	
	for(int i = 1; i < n; i++){
		for(int j = 1; j < n; j++){
			cheochinh[i][j] = cheochinh[i - 1][j - 1] + a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << cheochinh[i][j] << " ";
		}
		cout << endl;
	}
	
	for(int i = 1; i < n; i++){
		for(int j = n - 2; j >= 0; j--){
			cheophu[i][j] = cheophu[i - 1][j + 1] + a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << cheophu[i][j] << " ";
		}
		cout << endl;
	}
	
	
//	4
//	9 -2 -8 0 
//	-6 -2 0 9
//	4 -5 6 1
//	1 3 4 9
}
