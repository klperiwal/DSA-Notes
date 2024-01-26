Node* deleteMid(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    Node* temp = NULL;
    while( fast && fast->next)
    {
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    temp->next=slow->next;
    delete slow;
    return head;
}