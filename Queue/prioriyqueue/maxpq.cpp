#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>pq;

    for(int i=0;i<4;i++){
        int a;
        cin>>a;
        pq.push(a);
    }
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
}