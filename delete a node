SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) 
{
    SinglyLinkedListNode *nh=head;

    if (position == 0) 
        head = nh->next;
    else
        {for(int i=0;i<position-1;i++)
        {
            nh=nh->next;
        }
        nh->next=nh->next->next;
        }
    return head;
}
