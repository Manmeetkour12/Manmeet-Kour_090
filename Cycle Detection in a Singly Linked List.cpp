//first approach
bool detectCycle(Node *head)
{
    if(head==nullptr||head->next==nullptr){
        return false;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
    }

//second approach
#include<unordered_set>
using namespace std;
bool detectCycle(Node *head)
{
unordered_set<node *> obj;
Node *temp=head;
while(temp!=NULL){
if(obj.find(temp)!=obj.end())
    return true;
else{
obj.insert(temp);
temp=temp->next;
}
}
return false;
}
