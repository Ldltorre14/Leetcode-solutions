/*
49. Group Anagrams
Given an array of strings strs, group the 
anagrams together. You can return the answer in any order.

Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
Explanation:
There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.

Example 2:
Input: strs = [""]
Output: [[""]]

Example 3:
Input: strs = ["a"]
Output: [["a"]]
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() <= 1)
            return {strs};

        map<string, vector<string>> hashmap; 
        vector<vector<string>> group; 

        for(int i=0; i<strs.size(); i++){
            string str = strs[i];
            sort(strs[i].begin(), strs[i].end());
            hashmap[strs[i]].push_back(str);
        }

        for(auto pair : hashmap){
            group.push_back(pair.second);
        }

        return group;
    }
};
