int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *current1 = head1;
    SinglyLinkedListNode *current2 = head2;
    while(current1 != current2) {
        current1 = current1->next != NULL ? current1->next : head2;
        current2 = current2->next != NULL ? current2->next : head1;
    }
    return current1->data;
}
