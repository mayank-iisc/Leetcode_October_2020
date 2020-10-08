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
    
    int length(ListNode* head){
        if(head == NULL)
            return 0;
        else
            return 1 + length(head->next);
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        //Edge cases
        if(k == 0 || head == NULL)
            return head;
        
        //Calculate length of the linked list
        int len = length(head);
        
        //tracking last element with temp and second last element with prev
        ListNode* temp = head;
        ListNode* prev;
        
        //to reduce the number of iterations
        k = k % len;
        
        while(k){
            while(temp -> next != NULL){
                prev = temp;
                temp = temp -> next;
            }
            temp -> next = head;
            prev -> next = NULL;
            head = temp;
            k--;
        }
    return head;
    }
};
