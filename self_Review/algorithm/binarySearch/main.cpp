//for non-decreased sorting array and with no same numbers
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size();
    while(left<=right) {
        int mid = left + (right - left) / 2;
        if(nums[mid] == target)
            return mid + 1;
        else if(nums[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,15,20};
    int target;
    cin>>target;
    int result = binarySearch(nums, target);
    cout<<"the index in array is "<<result;
    return 0;
}