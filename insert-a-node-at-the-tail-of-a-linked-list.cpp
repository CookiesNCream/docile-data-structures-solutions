/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node * next;
  }
*/
Node * first; //global declaration
Node * Insert(Node * head, int data)
{
    Node * newNode;
    newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if(head==NULL){
        head = newNode;
        first = newNode;
    }
    else{
         while(head->next != NULL){
             head = head->next;
         }
         head->next = newNode;
    }
    head = first;
    return head;
}
