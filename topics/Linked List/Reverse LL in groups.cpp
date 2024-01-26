    struct node *rev(struct node* head,int k,int t)
    {
        node* curr = head;
        node* prev=NULL;
        node* next;
        for(int i=0;i<k;i++)
        {
            if(curr == NULL)
            {
                t=0;
                break;
            }
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        if(t == 0)
            return prev;
        
        head->next = rev(next,k,t);
        return prev;
    }
    struct node *reverse (struct node *head, int k)
    { 
        return rev(head,k,1);
    }