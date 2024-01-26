
// When the LL is of small size:-
struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        if(first==NULL)
            return second;
        if(second==NULL)
            return first;
            
        double d1=0,d2=0;
        while(first)
        {
            d1=d1*10;
            d1=d1+(first->data);
            first=first->next;
        }
        while(second)
        {
            d2=d2*10;
            d2=d2+(second->data);
            second=second->next;
        }
        
        d1=d1+d2;
        string s=to_string(d1);
        
        int r=s[0]-48;
        Node* head=new Node(r);
        Node *temp=head;
        
        for(int i=1;i<s.length();i++)
        {
            if(s[i]>'9' || s[i]<'0')
                break;
                
            int k=s[i]-48;
            temp->next=new Node(k);
            temp=temp->next;
        }
        
        return head;
    }




// For Large Linked List Use:

    Node* reverse( Node* head ) {
        Node *prevNode=NULL;
        Node *currNode=head, *nextNode = NULL;
        
        while(currNode) 
        {
            nextNode=currNode->next;
            currNode->next=prevNode;
            prevNode=currNode;
            currNode=nextNode;
        }
        return prevNode;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* head1=reverse(first);
        Node* head2=reverse(second);
        
        Node *head=NULL, *curr=NULL;
        int carry=0, sum=0;
        
        while( head1 || head2 || carry) 
        {
            sum=carry;
            if(head1)
                sum+=head1->data;
            if(head2)
                sum+=head2->data;
            // sum=(head1 ? head1->data:0) + (head2 ? head2->data:0);
            carry=sum/10;
            sum=sum%10;
            
            curr=new Node(sum);
            curr->next=head;
            head=curr;
            
            if(head1) 
                head1=head1->next;
            if(head2) 
                head2=head2->next;
        }
        return head;
    }
