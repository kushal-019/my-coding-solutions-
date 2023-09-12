
// Add two numbers represented by linked lists

// Given two decimal numbers represented by two linked lists of size N and M respectively. The task is to return a linked list that represents the sum of these two numbers.

// For example, the number 190 will be represented by the linked list, 1->9->0->null, similarly 25 by 2->5->null. Sum of these two numbers is 190 + 25 = 215, which will be represented by 2->1->5->null. You are required to return the head of the linked list 2->1->5->null.

// Example 1:

// Input:
// N = 2
// valueN[] = {4,5}
// M = 3
// valueM[] = {3,4,5}

// Output: 3 9 0  

// Explanation: For the given two linked
// list (4 5) and (3 4 5), after adding
// the two linked list resultant linked
// list will be (3 9 0).



//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends


class Solution
{
    public:
    
    struct Node * reverse_list(Node * head){
         Node * temp = NULL;
         Node * prev = NULL;
         Node * current = head;
         
         while(current != NULL){
            temp = current->next ;
            current->next = prev ;
            prev = current ;
            current = temp;
            
         }
         
         return prev;
    }
    
    struct Node * add_lists(struct Node * first , struct Node * second){
        int carry = 0;
        struct Node * ans = NULL;
        struct Node * head = ans ;
        
        while(first!= NULL || second != NULL || carry != 0){
        
            int first_digit =0;
            
            if(first!= NULL){
            first_digit = first->data;
            first = first->next;
            }
            
            int second_digit =0;
            
            if(second!= NULL){
            second_digit = second->data;
            second = second->next;
            }
            
            int sum = first_digit + second_digit + carry;
            carry  = sum /10;
            int digit = sum % 10;
            struct Node * element = new Node(digit);
            
            if(ans == NULL){
                ans = element;
                head = ans;
            }
            else{
               head->next = element;
                head= head->next;
            }
            }
            head = ans;
        return head;
    
            
        }
        
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node * rev_first = reverse_list(first);
        Node * rev_second = reverse_list(second);
        struct Node * ans = add_lists(rev_first  , rev_second);
        Node * answer = reverse_list(ans);
        return answer;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends