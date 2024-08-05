#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        a.push_back(n);
        int e;
        cin>>e;
        a.emplace_back(e);
    }
    cout<<"------------------------------"<<endl;
    for(int m:a){
        cout<<m<<endl;
    }
}