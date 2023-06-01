// Chef is judging a game called "Broken telephone". There are total N players taking part in the game. They are all sitting in a line. In the start of the game, first player is given a secret message written on a sheet of paper. Then they keep sending the message by whispering it to the player sitting immediate right to one and so on until it reaches the last person.Finally, the message received by the last player is compared with the message said by first player. If these messages aren't equal, there is someone who has misheard the message or whispered it wrongly to the next player. If messages is equal, then the players win and receive a tasty chocolate.Note that first player receives the message on a sheet of paper, thus he cannot mishear it.As Chef wants to be sure that every player has fulfilled his/ her role in the game, so he asks everyone to state their received messages after the end of the game. You are given an array A of N integers denoting messages received by each person.Please help Chef to find the number of players that could mishear the message or whisper it wrongly.

3
7
1 1 1 3 3 3 2    4
5
1 3 1 1 1        3
4
5 5 5 5          0


#include <iostream>
using namespace std;

int main() {
	int s;
	cin>>s;
	for(int i=0;i<s;i++){
	    int d;
	    cin>>d;
	    int arr[d];
	    for(int j=0;j<d;j++){
	        cin>>arr[j];
	    }
	    int count=0;
	    int k=-1;
	    for(int j=0;j<d-1;j++){
	        if(arr[j]!=arr[j+1]){
	            if(j!=k){
	                count+=2;
	                k=j+1;}
	            else{
	                count+=1;
	                 k=j+1;
	            }
	            
	        }
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}
