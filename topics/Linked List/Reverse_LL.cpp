Node* reverseList(struct Node *head)
    {
        // return head of reversed list
        Node *curr=head;
        Node *prev=NULL;
        if (head==NULL || head->next==NULL)
             return head;

         while(curr!=NULL)
        {
              Node *next=curr->next;
              curr->next=prev;
              prev=curr;
        	     curr=next;
    	}
         return prev;
    }
