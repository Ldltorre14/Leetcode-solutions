"""
242. Valid Anagram

Given two strings s and t, return true if t is an 
anagram of s, and false otherwise.

 
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
"""

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        # Dictionary comprehensions, same approach, just less lines of code
        #count1 = {char: s.count(char) for char in set(s)}
        #count2 = {char: t.count(char) for char in set(t)}

        count1, count2 = defaultdict(int),defaultdict(int)
        
        for i in range(len(s)):
            count1[s[i]] += 1
            count2[t[i]] += 1
        
        if count1 != count2:
            return False

        return True

        
