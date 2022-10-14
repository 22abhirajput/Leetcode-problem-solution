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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return NULL;
        int n = 0 ;
        ListNode* temp = head;
        
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        for(int i =0; i<(n/2-1); i++){
            temp = temp->next;
        }
        
        
            temp -> next= temp->next->next;
        
        return  head ;
    }
};