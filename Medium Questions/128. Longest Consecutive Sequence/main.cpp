/*
128. Longest Consecutive Sequence
Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
You must write an algorithm that runs in O(n) time.

Example 1:
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

Example 2:
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9 
*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() <= 1)
            return nums.size();

        set<int> numbers;

        for(int i=0; i<nums.size(); i++){
            numbers.insert(nums[i]);
        }

        int max = 0;
        int counter = 1;
        int lookup = *numbers.begin();
        auto it = numbers.begin();
        ++it;

        for(; it != numbers.end(); it++){
            if(*it - lookup == 1){
                counter++;
            }
            else{
                max = std::max(max, counter);
                counter = 1;
            }
            lookup = *it;
        }

        max = std::max(max, counter);
        return max;
    }
};
