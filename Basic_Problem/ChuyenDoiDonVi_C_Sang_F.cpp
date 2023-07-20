#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	// F = (C * 9/5) + 32
	int c;
	cin >> c;
	double f = (double)(c * 9/5) + 32;
	cout << fixed << setprecision(2) << f;	
}
