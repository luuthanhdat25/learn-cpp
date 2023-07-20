#include <iostream>
#include <set>

using namespace std;

int main(){
	int ntest; cin >> ntest;
	while(ntest > 0){
		int n; cin >> n;
		int a[n]; set<int> s;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		
		for(int i  = 0; i < n; i++){
			if(s.count(i) != 0){
				a[i] = i;
			}else{
				a[i] = -1;
			}
		}
		
		for(auto t: a) cout<< t << " ";
		ntest--;
	}
}
