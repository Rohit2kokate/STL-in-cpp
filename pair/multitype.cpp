#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>m[5];
    for(auto a=0;a<5;a++){
        int first;
        string name;
        cin>>first>>name;
        m[a]=make_pair(first,name);
    }
    for(auto a:m){
        cout<<a.first<<" "<<a.second<<endl;
    }
}