/*
20. Valid Parentheses
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;

        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push(c);
            } else {
                if (stack.empty()) return false;
                if (c == ')' && stack.top() != '(') return false;
                if (c == ']' && stack.top() != '[') return false;
                if (c == '}' && stack.top() != '{') return false;
                stack.pop();
            }
        }

        return stack.empty();
    }
};
