
// mreging 2 sorted linked lists.

// Sample Input 1:
// 2
// 1 4 5 -1
// 2 3 5 -1
// 7 8 -1
// 1 3 4 6 -1

// Sample Output 1:

// 1 2 3 4 5 5 -1
// 1 3 4 6 7 8 -1


#include <bits/stdc++.h>
using namespace std;
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };


Node <int> * solve(Node<int>*& first , Node<int> *& second){

    if(first->next == NULL){
        first->next = second;
        return first;
    }

    Node<int> * current_first = first ;
    Node<int> * current_second = second ;
    Node<int> * next_first = first->next ;
    Node<int> * next_second = second->next ;

    while(next_first != NULL && current_second != NULL){
        if(current_second->data >= current_first->data && current_second->data <= next_first->data ){
            current_first->next = current_second;
            next_second = current_second->next;
            current_second->next = next_first;
            current_first = current_second  ;
            current_second = next_second ;

        }
        else{
            current_first = next_first ;
            next_first = next_first->next;

            if(next_first == NULL){
                current_first->next = current_second ;
                return first;
            }
        }
    }

    return first;

}

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }


    if(first->data <= second->data){
         solve(first , second);
         return first;
    }
    else{
       solve(second , first);
       return second;
    }
}
