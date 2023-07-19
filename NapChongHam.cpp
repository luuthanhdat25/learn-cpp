#include <iostream>

using namespace std;


//truyen tham chieu
int tang(int &n){
	n++;
}

int tong(int a, int b){
	return a+b;
}

float tong(float a, float b){
	return a+b;
}
int main(){
	int a = 124, b = 1231;
	float c = 124.34, d = 1231.12;
	cout << tong(a,b) << endl;
	cout << tong(c,d) << endl;
	return 0;
}
