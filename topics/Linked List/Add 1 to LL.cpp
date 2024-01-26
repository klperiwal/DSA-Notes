     Node* addOne(Node *head) 
    {
        // return head of list after adding one
        Node *a=new Node(1);
        Node *curr=NULL;
        
        Node *temp=head;
        while(temp!=NULL)
        {
            if(temp->data!=9)
                curr=temp;
            temp=temp->next;
        }

        temp=head;
        if(curr==NULL)
        {
            a->next=head;
            while(temp!=NULL)
            {
                temp->data=0;
                temp=temp->next;
            }
            return a;
        }
       
        int x=curr->data;
        curr->data=x+1;
        while(curr->next!=NULL)
        {
            curr=curr->next;
            curr->data=0;
        }
        return head;
    }