#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long int a, b;
	cin >> a >> b ;
	int tong = a + b, hieu = a - b;
	long long tich = /*(long long)*/ 1ll * a*b;
	//float thuong = (float) a/b;
	cout << tong << " "<< hieu << " " << tich << " " << fixed << setprecision(2) << 1.0 * a/b << endl;
}
