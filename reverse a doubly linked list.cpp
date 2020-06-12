DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    DoublyLinkedListNode* t;
    DoublyLinkedListNode* s=head;
    while(s!=NULL){
        t=s->prev;
        s->prev=s->next;
        s->next=t;
        s=s->prev;
    }
    if(t!=NULL)
        head=t->prev;
    return head;
}
