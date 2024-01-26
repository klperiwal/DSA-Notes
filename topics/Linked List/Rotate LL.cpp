Node* rotate(Node* head, int k)
    {
        Node *a=head;
        while(a->next!=NULL)
            a=a->next;
            
        a->next=head;
        a=head;
        while(--k)
            a=a->next;
        
        Node *temp=a->next;
        a->next=NULL;
        
        return temp;
    }