// Reverse the given linked list

// Sample Input 1 :

// 1

// 1 2 3 4 5 6 -1

// Sample Output 1 :

// 6 5 4 3 2 1 -1

#include <bits/stdc++.h>
#include<iostream>
using namespace std;


class Node
    {
    public:
        int  data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

Node *reverseLinkedList(Node *head) 
{
     if(head == NULL || head->next == NULL){
        return head;
    }
    Node* temp = NULL;
    Node* forward = NULL;
    Node * current = head ; 
    while(current!=NULL){   
        forward = current->next;
        current ->next = temp;
        temp = current ;
        current = forward;    
        }
        
    head = temp;
    return head;
}