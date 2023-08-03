#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
    	int n, m; cin >> n >> m;
    	long long a[n][m]; 
    	for(int i = 0; i < n; i++){
    		for(int j = 0; j < m; j++ ) cin >> a[i][j];
		}
		
		// tim gia tri max torng ma tran 
		long long maxValue = -1e18;
		for(int i = 0; i < n; i++){
    		for(int j = 0; j < m; j++ ) maxValue = max(a[i][j], maxValue);
		}
		// tao mang danh dau fibonacci
		int fibo[maxValue+1] = {0}; long long pre = 0, cur = 1;
		fibo[pre] = 1;
		fibo[cur] = 1;
		while(cur + pre<= maxValue){
			long long temp = cur;
			cur += pre;
			pre = temp;
			fibo[cur] = 1;
		}
		
		// Duyet qua tung cot roi check fibo -> luu vao vector va sum so sanh size
		vector<long long> colM; long long maxM = 0; int colIn = 0;
		for(int i = 0; i < m; i++){
			long long sum = 0; vector<long long> col;
    		for(int j = 0; j < n; j++ ) {
    			if(fibo[a[j][i]] == 1){
    				col.push_back(a[j][i]);
    				sum += a[j][i];
				}
    		}
    		
    		if(col.size() > colM.size()){
    			colM = col;
    			maxM = sum;
    			colIn = i;
			}else if(col.size() == colM.size() && sum > maxM){
				colM = col;
    			maxM = sum;
    			colIn = i;
			}
		}
		
		
		//output
		cout << colIn + 1<< endl;
		for(int i = 0; i < colM.size(); i++){
			cout << colM[i] << " ";
		}
		
//		1
//		4 4
//		1 2 3 5
//		2 2 5 8
//		10 1 2 3
//		21 13 3 3
	}

    return 0;
}

