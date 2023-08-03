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
		        int upper = (i > 0) ? b[i - 1][j] : 0;                             
		        int upperLeft = (i > 0 && j > 0) ? b[i - 1][j - 1] : 0;           
		        int upperRight = (i > 0 && j < m - 1) ? b[i - 1][j + 1] : 0;     
		        b[i][j] = a[i][j] + max(upper, max(upperLeft, upperRight));    
		    }
		}
		
	    int maxValue = INT_MIN;
	    for (int i = 0; i < m; i++) maxValue = max(b[n - 1][i], maxValue);
	    
	
	    cout << maxValue << endl;
    }
    return 0;
}

