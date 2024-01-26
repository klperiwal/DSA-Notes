void removeLoop(Node* head)
    {
        Node* slow=head,*fast=head;
        Node* prev=NULL;

        while(fast && fast->next)
	{
            slow=slow->next;
            fast=fast->next->next;
            
	    if(slow==fast && slow!=head)
            {
                slow=head;
                while(slow->next!=fast->next){
                    slow=slow->next;
                    fast=fast->next;
                }
                fast->next=NULL;
                break;
            }
             else if(slow==fast)
	    {
                Node* temp=head;
                while(temp->next!=head) 
		    temp=temp->next;
                temp->next=NULL;
            }
        }
    }