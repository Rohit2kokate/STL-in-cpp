#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int ,vector<int>,greater<int>>min;
    for(int i=0;i<4;i++){
        int m;
        cin>>m;
        min.push(m);
    }
     for(int i=0;i<4;i++){
        cout<<min.top()<<"  "<<endl;
        min.pop();
    }
}