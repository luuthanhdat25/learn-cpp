#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n][m], b[n][m] = {0};
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }

		for (int i = 0; i < n; i++) {
		    for (int j = 0; j < m; j++) {
		        int up = (i > 0) ? b[i - 1][j] : -1;                             
		        int left = (j > 0) ? b[i][j - 1] : -1;
				if(up == -1 && left == -1){
					b[i][j] = a[i][j];
				}else if(up == -1){
					b[i][j] = a[i][j] + left;
				}else if(left == -1){
					b[i][j] = a[i][j] + up;
				}else{
					b[i][j] = a[i][j] + min(up,left);
				}                  
		    }
		}
	
	    cout << b[n-1][m-1] << endl;
//	    1
//	    3 3
//	    1 3 1
//	    1 5 1
//	    4 2 1
    }
    return 0;
}

