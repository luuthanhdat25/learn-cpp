#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int searchInsert(vector<int>& nums, int target) {
        int low = 0, height = nums.size() - 1;
        int i = (low + height) / 2;
        while(true){
            if(nums[i] == target) return i;
            else if(nums[low] == target) return low;
            else if(nums[height] == target) return height;
            else if(nums[i] > target){
                height = i;
                i = (low + height) / 2;
                if(nums[i] < target && nums[i + 1] > target) return i+=1;
            }else if(nums[i] < target){
                low = i; 
                i = (low + height) / 2; 
                if(nums[i] < target && nums[i + 1] < target) return i+=2;
            }
        }
        return i;
    }
int main() {
    vector<int> v = {1,3,5,6};
    //cout << searchInsert(v, 7) << endl;
    for(int i = 0; i < 10 ; i++){
    	cout << i << " Index: " << searchInsert(v, i) << endl;
	}
	
    return 0;
}

