Node *removeDuplicates(Node *head)
{
    Node *a=head;
    while(a!=NULL && a->next!=NULL)
    {
        if(a->data==a->next->data)
        {
            Node *temp=a->next;
            a->next=a->next->next;
            delete temp;
        }
        else
            a=a->next;
    }
    return head;
}