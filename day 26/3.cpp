// check weather linked list is circular or not ?

#include<iostream>
#include<bits/c++io.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
};


bool isCircular(Node *head) {

  if (head == NULL) {
    return true;
  }

  if (head->next == NULL) {
    return false;
  }

  Node *fast = head;
  Node *slow = head;

  while (slow != NULL && fast != NULL) {
    fast = fast->next;
    if (fast != NULL) {
      fast = fast->next;
    }
    slow = slow->next;
    if (slow == fast) {
      if (slow == head)
        return true;
      return false;
    }
  }
  return false;
}
