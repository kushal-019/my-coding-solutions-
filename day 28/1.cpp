// Check if Linked List is Palindrome


// Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.

// Example 1:

// Input:
// N = 3
// value[] = {1,2,1}
// Output: 1
// Explanation: The given linked list is
// 1 2 1 , which is a palindrome and
// Hence, the output is 1.


//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;


/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};


class Solution{
  public:
    Node * middle_index(Node *& head){
        
        Node * fast = head ;
        Node * slow = head ;
        
        while(fast!= NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
        
        
    }
    
    Node * reverse_list(Node * head){
        // if(head->next == NULL){
        //     return head;
        // }
        
        Node * temp = head;
        
        Node * current = head;
        Node * prev = NULL;
        Node * next_list = NULL;
        
        
        while(current != NULL){
            next_list = current->next;
            current -> next = prev ;
            prev = current;
            current = next_list;
        }
        
        return prev;
        
    }
    
    bool isPalindrome(Node *head)
    {
        // for only one element.
        if(head->next == NULL){
            return 1;
        }
        
        Node * temp  = head ;
        
        // found middle index.
        
        Node * middle = middle_index(head);
        
        Node * middle_of_reversed = reverse_list(middle);
        
        
        while(middle_of_reversed != NULL){
            if(temp ->data != middle_of_reversed->data){
                return false;
            }
            middle_of_reversed = middle_of_reversed->next;
            temp = temp->next;
            
        }
        return true;
        
        
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends