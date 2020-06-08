bool compare_lists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB){

while(headA!=NULL && headB!=NULL && headA->data==headB->data)
headA=headA->next,headB=headB->next;
    
   if(!(headA||headB))
   return 1;
   else return 0;

}