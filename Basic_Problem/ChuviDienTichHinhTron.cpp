#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double n;
	cin >> n;
	double c = 2 * n * 3.14, s = 3.14 * n * n;
	cout << fixed << setprecision(2) << c << " " << s;
}
