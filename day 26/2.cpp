
// reverse the given linked list but but in group of k element in one group . 
// we have to reverse a group containing k consicutive nodes

// Sample Input 1:
// 6
// 5 4 3 7 9 2
// 4 


// Sample Output 1:
// 7 3 4 5 9 2


// Explanation Of The Sample Input 1:
// For the given test case, we reverse the nodes in groups of four. But for the last 2 elements, we cannot form a group of four, so leave them as they are. The linked list becomes 7->3->4->5->9->2. Hence the output is 7 3 4 5 9 2


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


int lenll(Node *&head)
{
  Node *temp = head;
  int length = 0;
  while (temp){
    length++;
    temp = temp->next;
  }
  return length;
}

Node *kReverse(Node *head, int k) {

  int len = lenll(head);
  if (head == NULL || k > len) {
    return head;
  }
  Node *pre = NULL, *cur = head, *nxt = NULL;
  int cnt = 0;
  while (cur != NULL && cnt < k) {
    cnt++;
    nxt = cur->next;
    cur->next = pre;
    pre = cur;
    cur = nxt;
  }

  if (nxt != NULL) {
    head->next = kReverse(nxt, k);
  }

  return pre;
}