/*
347. Top K Frequent Elements
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 
Example 1:
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]

Example 2:
Input: nums = [1], k = 1
Output: [1]
*/

//Not the most optimal solution, idk about Priority queues/Heaps yet, so I will return to update this after learning this data structure

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> hashmap;
        for(int i=0; i<nums.size(); i++){
            hashmap[nums[i]]++;
        }
        vector<pair<int,int>> pairs(hashmap.begin(), hashmap.end());
        sort(pairs.begin(), pairs.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second; // Sort by frequency in descending order
        });

        vector<int> topK;
        for(int i=0; i<k; i++){
            topK.push_back(pairs[i].first);
        }
        return topK;
    }
};
