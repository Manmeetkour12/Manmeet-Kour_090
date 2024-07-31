#include<math.h>
int binaryToInteger(int n, Node *head) {
    int dec = 0;
   Node *p = head;
   while(p != NULL){
       n--;
       int x = p->data;
       dec= dec +x * pow(2,n);
       p = p->next;
   }
    return dec;
}
