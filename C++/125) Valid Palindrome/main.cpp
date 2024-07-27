/*
125. Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
*/

class Solution {
public:
    bool isPalindrome(string s) {
        string word = "";

        //First we clean the word from anything else than alphanumeric
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'A' && s[i]<= 'Z')
                word += tolower(s[i]);    
            else if(s[i] >= 'a' && s[i] <= 'z')
                word += s[i];
            else if (s[i] >= '0' && s[i] <= '9')
                word += s[i];
        }

        /*We loop through the word with 2 pointers, fron the first and last index*/
        int ptr = word.length() - 1;
        for(int i=0; i<word.length(); i++){
            if(word[i] == word[ptr])
                ptr--;
            else
                return false;
        }
        
        return true;
    }
};
