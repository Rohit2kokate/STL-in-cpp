#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,pair<int,int>>pair[3];

    for(int i=0;i<3;i++){
        int first,sec,thr;
        cin>>first>>sec>>thr;

        pair[i]={first,{sec,thr}};
    }
    cout<<"=================================\n";
    for(auto a:pair){
        cout<<a.first<<" "<<a.second.first<<" "<<a.second.second<<endl;
    }
}