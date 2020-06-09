SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* h1, SinglyLinkedListNode* h2) {if (!h1) 
        return h2; 
    if (!h2) 
        return h1; 
  
    // start with the linked list 
    // whose head data is the least 
    if (h1->data < h2->data) { 
        h1->next = mergeLists(h1->next, h2); 
        return h1; 
    } 
    else { 
        h2->next = mergeLists(h1, h2->next); 
        return h2; 
    } 
} 
