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
