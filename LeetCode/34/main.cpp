class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
            vector<int> result = {-1,-1};
            int left = binarySearch(nums, target, true);
            int right = binarySearch(nums, target, false);
            result[0] = left;
            result[1] = right;
            return result;
        }
    int binarySearch(vector<int>& nums, int target, bool isleft) {
        int left = 0;
        int right = nums.size() - 1;
        int result = -1;
        
        while(left<=right) {
            int mid = left + (right - left) / 2;
            
            if(target > nums[mid])
                left = mid + 1;
            else if(target < nums[mid])
                right = mid - 1;
            else{            //found target then find low or high
                result = mid;
                if(isleft)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }
        return result;
    }
};