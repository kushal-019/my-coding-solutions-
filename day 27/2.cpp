// sort Linked list of 0 , 1, 2 

// Sample Input 1:
// 7
// 1 0 2 1 0 2 1


// Sample Output 1:
// 0 0 1 1 1 2 2


// Explanation Of Sample Input 1:
// Input: 1 -> 0 -> 2 -> 1 -> 0 -> 2 -> 1

// Output: 0 -> 0 -> 1 -> 1 -> 1 -> 2 -> 2

// Explanation: 
// In this example, the original linked list contains two 0s, three 1s, and two 2s. The sorted linked list has all the 0s at the beginning, followed by all the 1s, and finally, all the 2s at the end.

#include <bits/stdc++.h>
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

Node* sortList(Node *head){
    Node * current = head ;

    int zeroCount = 0;
    int twoCount = 0;
    int oneCount = 0;

    while(current != NULL){
        if(current->data == 0){
            zeroCount++;
            current= current->next;
        }
        else if(current->data == 1){
            oneCount++;
            current= current->next;
        }
        else if(current->data == 2){
            twoCount++;
            current= current->next;
        } 
    }
    Node * temp = head ;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;        
        }
        temp = temp->next;
    }
    return head;
}