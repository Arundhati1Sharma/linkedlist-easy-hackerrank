SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *cur = head; 
    while(cur->next!=NULL){ 
        if(cur->data == cur->next->data) 
        cur->next = cur->next->next;  
        else 
        cur = cur->next; 
    } 
   return head;
}