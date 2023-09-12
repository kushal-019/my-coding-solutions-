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
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node *findMiddle(Node *head) {

    // Write your code here

    Node *slow=head;

    Node *fast=head;

    while(fast!=NULL && fast->next!=NULL){

        slow=slow->next;

        fast=fast->next->next;

 

    }

    return slow;

}

