#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> v = {1,2,3,4,5};

//	for(int i = 0; i < values.size(); i++)	{
//		cout << values[i] << " ";
//	}
//	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
//		cout << *it << endl;
//	}
	//Auto kieu tu suy luan kieu du lieu
	for(auto it = v.begin(); it != v.end(); ++it){
		cout << *it << endl;
	}
}
