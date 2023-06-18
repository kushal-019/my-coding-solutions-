// N people from 1 to N are standing in the queue at a movie ticket counter. It is a weird counter, as it distributes tickets to the first K people and then the last K people and again first K people and so on, once a person gets a ticket moves out of the queue. The task is to find the last person to get the ticket.
// Input:
// N = 9
// K = 3
// Output:
// 6
// Explanation:
// Starting queue will like {1, 2, 3, 4, 5, 6, 7, 8, 9}. After the first distribution queue will look like {4, 5, 6, 7, 8, 9}. And after the second distribution queue will look like {4, 5, 6}. The last person to get the ticket will be 6

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        int arr[N]={0};
        int p=0;
        int k=0;
        int count=N;
        while(count>0){
            for(int i=0;i<K ;i++){
                arr[i]=1;
                count--;
                p++;
                if(count==0){
                    return p;
                }
            }
            for(int i=0;i<K >0;i++){
                arr[N-1-i]=1;
                count--;
                k++;
                if(count==0){
                    return N-k+1;
                }
            }
        }
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends