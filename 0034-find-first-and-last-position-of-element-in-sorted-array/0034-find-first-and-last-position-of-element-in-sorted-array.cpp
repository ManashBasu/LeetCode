class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = -1;
        int last = -1;

        int left = 0;
        int right = nums.size() - 1;

        while ( left <= right)
        {
            int mid = left + (right - left)/ 2;

            if (nums[mid] == target)
            {
                first = mid;
                right = mid - 1;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }


        }
        left = 0;
        right = nums.size() - 1;

        while (left <= right)
        {
            int mid2 = left + (right- left)/2;

            if (nums[mid2] == target)
            {
                last = mid2;
                left = mid2 + 1;
            }
            else if (nums[mid2] < target)
            {
                left = mid2 + 1;
            }
            else 
            {
                right = mid2 - 1;
            }
        }

        return {first, last};
    }
};