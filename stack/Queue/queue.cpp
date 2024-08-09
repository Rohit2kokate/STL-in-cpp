#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    cout<<"size of queue is"<<q.size()<<endl;
    while(!q.empty()){
        cout<<" element is"<<q.front()<<endl;
        q.pop();
    }
    
}