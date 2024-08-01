Node* findIntersection(Node *firstHead, Node *secondHead) {
    if (!firstHead || !secondHead) {
        return NULL;
    }

    Node *ptr1 = firstHead;
    Node *ptr2 = secondHead;

    while (ptr1 != ptr2) {
        ptr1 = (ptr1) ? ptr1->next : secondHead;
        ptr2 = (ptr2) ? ptr2->next : firstHead;
    }

    return ptr1;
}

//second approach
#include<unordered_set>
using namespace std;
Node* findIntersection(Node *firstHead, Node *secondHead)
{
unordered_set<Node *> ob;
while(firstHead!=NULL){
    ob.insert(firstHead);
    firstHead=firstHead->next;
}
while(secondHead!=NULL){
    if(ob.find(secondHead)!=ob.end())
         return secondHead;
else
    secondHead=secondHead->next;
}
return NULL;
}
