#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int ntest; cin >> ntest;
	while(ntest > 0){
		int n; cin >> n;
		int arr[n];	
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		
		int deductM = -1, minL = INT_MAX;
		
		for(int i = 0; i < n; i++) {
			if(arr[i] > minL) deductM = max(deductM, arr[i] - minL);
			minL = min(minL, arr[i]);
		}
		
		cout << deductM << endl;
		ntest--;
	}
}
