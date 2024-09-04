/*
242. Valid Anagram

Given two strings s and t, return true if t is an 
anagram of s, and false otherwise.

 
Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
*/

//METHOD 1. SORTING
//We know that a word is anagram to another, when they have the same length, letters and letter frequency (quantity of each letter)
//Then if we sort both words, then both words should look like the same
bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            return true;
        return false;   
}




