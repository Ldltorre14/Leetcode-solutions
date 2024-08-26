/*
35. Search Insert Position
Given a sorted array of distinct integers and a target value, 
return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if (nums[i] == target)
                return i;
        }
        nums.push_back(target);
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            if (nums[i] == target)
                return i;
        }
        return 0;
    }
};