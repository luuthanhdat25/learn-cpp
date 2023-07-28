#include <iostream>

using namespace std;

int main(){
	//Create fibonacci mark
	int mark[1001];
	int fibo[30]; fibo[0] = 0; fibo[0] = 1;
	for(int i = 2; i < 30; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		if(fibo[i] > 1000) break;
	}
	
	for(int i = 0; fibo[i] <= 1000 ; i++){
		mark[fibo[i]] = 1;
	}
		
	////////////////////////////
	int ntest; cin >> ntest;
	while(ntest > 0){
		int n; cin >> n;
		int arr[n];	for(int i = 0; i < n; i++) {cin >> arr[i];}
		
		for(int i = 0; i < n; i++){
			if(mark[arr[i]] == 1) cout << arr[i] << " ";
		}
		
		ntest--;
	}
}
