#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int ,pair<pair<int,int>,int>>pairs[2];
    for(int i=0;i<2;i++){
        int fir,thir,fou,six;
        cin>>fir>>thir>>fou>>six;
        pairs[i]=make_pair(fir,make_pair(make_pair(thir,fou),six));
    }
    for(auto a:pairs){
        cout<<a.first<<" "<<a.second.first.first<<" "<<a.second.first.second<<" "<<a.second.second<<endl;
    }
}