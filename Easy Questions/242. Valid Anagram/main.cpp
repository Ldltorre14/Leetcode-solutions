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
bool isAnagram1(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t)
            return true;
        return false;   
}


//METHOD 2. Counting frequencies with a Hashmap
//Basically, we count the frequency of each character in both strings, and we save them at their correspondent hashmap
//If both hashmap are equal, then s is an anagram of t
bool isAnagram2(string s, string t) {
        if(s.length() != t.length())
            return false;

        map<char, int> count1;
        map<char, int> count2;

        for(int i=0; i<s.length(); i++){
            count1[s[i]]++;
            count2[t[i]]++;
        } 

        if(count1 != count2)
            return false;

        return true;
    }


