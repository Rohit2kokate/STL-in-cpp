#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    for(int i=0;i<4;i++){
        int a;
        cin>>a;
        s.push(a);
    }
    for(int i=0;i<4;i++){
        if(s.top()%2==0){
            cout<<s.top()<<endl;
        }
        else{
            cout<<"ODD"<<endl;
        }
        s.pop();
    }
}