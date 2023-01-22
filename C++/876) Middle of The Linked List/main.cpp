/*
876) Middle of The Linked List
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int cx = 0, i=0;
        ListNode* ptr = head;
        ListNode* acx = head;

        while(acx != NULL){
            acx = acx->next;
            cx++;
        }
        while(i != cx / 2){
            ptr = ptr->next;
            i++;  
        }
        return ptr;
    }
};
