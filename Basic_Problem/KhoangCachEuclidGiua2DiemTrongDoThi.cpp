#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	float x,y, z,t;
	cin >> x >> y >> z >> t;
	float dis = sqrt(pow(x - z, 2) + pow(y - t, 2));
	cout << fixed << setprecision(2) << dis;
}
