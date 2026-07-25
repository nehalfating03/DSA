/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int length(ListNode* head){
        int count = 0;
        while(head != NULL){
            count++;
            head = head -> next ;

        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = length(headA);
        int lenB = length(headB);

        int diff = abs(lenA - lenB);

        if(lenA > lenB){
            while(diff-- ){
                headA = headA -> next ;
            }
        }
        else{
            while(diff-- ){
                headB = headB -> next ;
            }
        }

        while(headA != NULL || headB != NULL ){
            if(headA == headB){
                return headA;
            }
            headA = headA -> next;
            headB = headB -> next;
        }
        return NULL;
    }
};