DoublyLinkedListNode* makeNode(int data){
    DoublyLinkedListNode* newNode = (DoublyLinkedListNode*) malloc(sizeof(DoublyLinkedListNode));
    newNode->data = data;
    newNode->next = 0;
    newNode->prev = 0;
    return newNode;
}
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {

    if (!head) {
        DoublyLinkedListNode* newNode = makeNode(data);
        return newNode;
    }
    if (data < head->data){
        DoublyLinkedListNode* newNode = makeNode(data);
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
    else{
        head->next = sortedInsert(head->next, data);
        head->next->prev = head;
        return head;
    }
}
