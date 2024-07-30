Node *deleteNode(Node *head, int pos)
{
    if(head==NULL)
	  return head;
	else if(pos==0)
	  head=head->next;
	else{
		int i=0;
		Node *temp=head;
		while(i<pos-1&&temp!=NULL)
		{
			temp=temp->next;
			i++;
		}
		if(temp==NULL||temp->next==NULL)
		   return head;
		else
           temp->next=temp->next->next;
		return head;
	} 
	}
