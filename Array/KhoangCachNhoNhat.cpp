#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

//int main(){
//	int ntest; cin >> ntest;
//	while(ntest > 0){
//		int n; cin >> n; set<int> s;
//		for(int i = 0; i < n; i++){
//			int x; cin >> x;
//			s.insert(x);
//		}
//		
//		int min = INT_MAX;
//		for(set<int>::iterator it = s.begin(); it != prev(s.end()); ++it){
//			if(*next(it) - *it < min) min =  *next(it) - *it;
//			cout << min << endl;
//		}
//		
//		cout << min << endl;
//		ntest--;
//	}
//}

int main(){
	int TC; cin >> TC;
	while(TC--){
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int res = INT_MAX;
		for(int i = 1; i < n; i++){
			res = min(res, a[i] - a[i - 1]);
		}
		cout << res << endl;
	}
	return 0;
}
