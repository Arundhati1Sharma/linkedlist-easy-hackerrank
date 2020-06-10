int getNode(SinglyLinkedListNode* head, int positionFromTail) {

    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* curr=head;
    SinglyLinkedListNode* next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head=prev;
    for(int i=0;i<positionFromTail;i++){
        head=head->next;
    }
    return head->data;
}