bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
  vector<int> vec;
  LinkedListNode<int> *temp=head;
  while(temp!=NULL){
      vec.push_back(temp->data);
      temp=temp->next;
  }
  int start=0,end=vec.size()-1;
  while(start<end){
      if(vec[start]!=vec[end])
      return false;
      start++;
      end--;
 }
 return true;
}
