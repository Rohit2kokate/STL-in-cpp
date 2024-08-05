#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>a[5];
    for(int i=0;i<5;i++){
        int first,secound;
        cin>>first>>secound;
        a[i]=make_pair(first,secound);
    }
    for(const auto m:a){
        cout<<m.first<<" "<<m.second<<endl;
    }
    cout<<"----------------------------------\n";
    for(auto m:a){
        if(m.first%2==0 && m.second%2==0){
            cout<<m.first<<" "<<m.second<<endl;
        }
    }
}