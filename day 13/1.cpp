#include <bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>location;
    vector<int>type;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        location.push_back(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        type.push_back(x);
    }
        vector <int> temp;
        vector <int> temp2;
        for(int i=0;i<n;i++){
            temp[i]=type[i];
        }
        sort(type[0],type[n]);
        temp2.push_back(0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(type[j]==temp[i]);
                temp2.push_back(location[i]);
                break;
            }
        }
        int sum=0;
        temp2.push_back(0);
        for(int i=1;i<n+2;i++){
            int a=min(temp2[i],temp2[i-1]);
            int b=max(temp2[i],temp2[i-1]);
            sum=sum+b-a;
        }
        cout<< sum;

}

        