// design a data structure which represents two stacks using only one array common for both stacks . 

// Sample Input 1:
// 3 5
// 1 1 3
// 1 2 4
// 1 1 5
// 2 1
// 2 2
// Sample Output 1:
// 5
// 4

#include <bits/stdc++.h> 
using namespace std;

class TwoStack {
        int size;
        int *arr; 
        int top1;
        int top2;

public:

    // Initialize TwoStack.
    TwoStack(int s) {
            this->size = s;
            top1 = -1;
            top2 = s;
            arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
         if(top2-top1 > 1){
            top1++;
            arr[top1] = num;
        }
        return;
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2-top1 > 1){
            top2--;
            arr[top2] = num;
        }
        return;
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 >= 0){
            return arr[top1--]; 
        }
        return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 < size){
            return arr[top2++];

        }
        return -1;
    }
};
