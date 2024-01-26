Node* movehead(Node *head,int d)
{
    while(d--)
        head=head->next;

    return head;
}

int intersectPoint(Node* head1, Node* head2)
{
    if(head1==NULL && head2==NULL)
        return -1;
    if(head1==NULL)
        return head2->data;
    if(head2==NULL)
        return head1->data;
    
    Node* temp1=head1;
    Node* temp2=head2;
    
    int len1=1;
    int len2=1;
    
    while(temp1!=NULL)
    {
        temp1=temp1->next;
        len1++;
    }
     while(temp2!=NULL)
    {
        temp2=temp2->next;
        len2++;
    }
    
   
    
    if(len1>len2)
    { 
        int diff=len1-len2;
        Node*head= movehead(head1,diff);
        
        while(head!=NULL || head2!=NULL)
        {
           if(head->next==head2->next)
               if(head->next==NULL)
                    return -1;
               else 
                    return head->next->data;
               
               head=head->next;
               head2=head2->next;
        }
    }
    else
    {
        int diff=len2-len1;
        Node*head= movehead(head2,diff);
        
        while(head1!=NULL || head!=NULL)
        {
           if(head->next==head1->next)
               if(head->next==NULL)
                    return -1;
               else 
                    return head->next->data;
               
               head=head->next;
               head1=head1->next;
        }
    }
    return -1;   
}
