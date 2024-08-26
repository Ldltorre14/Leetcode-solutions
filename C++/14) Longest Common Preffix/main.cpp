/*
14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() <= 1)
            return strs[0];

        string preffix = strs[0];
        string commonPref = "";

        //Outer loop iterate through all the characters
        for(int i=0; i<preffix.length(); i++){
        //Inner loop iterates through all the strings in strs vector
            for(int j=1; j<strs.size(); j++){
                if(preffix[i] != strs[j][i])
                    return commonPref;
                else if(j == strs.size() - 1)
                    commonPref += preffix[i];
            }
        }
        return commonPref;
    }
};
