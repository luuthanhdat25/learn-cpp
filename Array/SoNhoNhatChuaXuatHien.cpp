#include <iostream>
#include <set>

using namespace std;

// Use Set O(n.log(n))
//int main(){
//	int ntest; cin >> ntest;
//	multiset<int> outset;
//	while(ntest > 0){
//		int n; cin >> n;
//		int a[n]; set<int> s;
//		for(int i = 0; i < n; i++){
//			cin >> a[i];
//			s.insert(a[i]);
//		}
//		
//		int min = *s.begin(), max = *s.rbegin(), r = min;
//		for(int i = min; i <= max; i++){
//			if(s.count(r) != 0) r++;
//		}
//		ntest--;
//	}
//	
//	for(auto r: outset) cout << r << endl;
//}

// Use Marking Algorithm
int main(){
	int ntest; cin >> ntest;
	
	while(ntest > 0){
		int n; cin >> n;
		int a[n];
		int max = -1000000, min = 1000000; 
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] > max) max = a[i];
			if(a[i] < min) min = a[i];
		}
		
		int lengthArray = max - min + 2;
		int b[lengthArray]; 
		
		for(int i = 0; i < lengthArray; i++){
			b[i] = 0;
		}
		
		for(int i = 0; i < n; i++){
			b[a[i] - min] = 1;
		}
		
		for(int i = 0; i < lengthArray; i++){
			if(b[i] == 0 && (i + min) > 0) {
				cout << i + min << endl;
				break;
			}
		}	
		
		ntest--;
	}
	
}
