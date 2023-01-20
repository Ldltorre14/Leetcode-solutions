/* 
9) Palindrome Number
Given an integer x, return true if x is a palindrome, and false otherwise.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        string word = to_string(x);
        string word2;
        for(int i=word.length()-1; i>-1; i--){
            word2 += word[i];
        }
        if(word == word2) return true;
        return false;
    }
};
