// You are playing a fun game. Your favorite character, Seele, is verystrong. She can kill monsters in either '1' or '2' attacks. There are 'N' monsters ready to fight. You are given an array 'A' of length 'N' such that 'A[i]' represents the number of attacks Seele takes to kill the 'i-th' enemy. Seele and the monsters take turns attacking. They attack once per turn. The damage dealt by the monsters to Seele is negligible.Each attack from Seele only targets one monster. Seele also has a unique ability. If she kills a monster, she gets to attack again in the same turn. However, if the second attack kills another monster, Seele dees not get another extra attack. Return the minimum number of turns Seele takes to kill all the monsters.
// For Example:
// Let 'N' = 4, 'A' = [ 1, 1, 1, 2 ]. Turn 1: Seele attacks the first monster and kills it. With her extra attack, she targets the second monster and kills it.Turn 2: Seele attacks the third monster and kills it. With her extra attack, she targets the fourth monster and reduces the number of attacks to kill it to '1'. Turn 3: Seele attacks the fourth monster and kills it.

// It can be shown that this is the minimum number of turns Seele can take. Thus, the answer is '3'

#include <bits/stdc++.h> 
using namespace std;
int butterflies(int n, vector<int> &a) {
    int count=0;
    int z=0;
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==2){
            c++;
        }
        if(a[i]==2){
            count+=1;
        }
        if(a[i]==1){
            if(z==1){
                z=0;
            }
            else{
            count+=1;
            z=1;
            }
        }
    }
    if(c==n){
        count++;
    }
    return count;
}
