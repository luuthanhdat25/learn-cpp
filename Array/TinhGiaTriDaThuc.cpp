#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int ntest; cin >> ntest;
	while(ntest > 0){
		int n,x; cin >> n >> x;
		long long arr[n];
		for(int i = 0; i < n; i++){
			int t; cin >> t;
			arr[i] = 1ll * t * pow(x, n - (i + 1));
		}
		int sum = 0; 
		for(int i = 0; i < n; i++){
			sum += arr[i];
		}
		auto r = sum % (long long)(pow(10, 9) + 7);
		cout << r << endl;
		ntest--;
	}
}
