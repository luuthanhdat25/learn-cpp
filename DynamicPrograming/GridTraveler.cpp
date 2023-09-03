#include <iostream>
#include <vector>

using namespace std;

int gridTraveler(int m, int n, vector<vector<int>>& memo) {
    if (m == 1 && n == 1) return 1;
    if (m == 0 || n == 0) return 0;
    
    if (memo[m - 1][n - 1] != -1) 
        return memo[m - 1][n - 1];
    
    memo[m - 1][n - 1] = gridTraveler(m - 1, n, memo) + gridTraveler(m, n - 1, memo);
    return memo[m - 1][n - 1];
}

int uniquePaths(int m, int n) {
	vector<vector<int>> memo(m, vector<int>(n, -1)); 
    return gridTraveler(m, n, memo);
}

int main(){
	cout << uniquePaths(3,3);
}
