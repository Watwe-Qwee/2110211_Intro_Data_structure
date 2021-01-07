#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    set<int> set1,set2;
    for(int i=0,temp;i<n;i++){
        cin>>temp;
        set1.insert(temp);
    }
    for(int i=0,temp;i<m;i++){
        cin>>temp;
        set2.insert(temp);
    }
    for(auto &x:set1){
        if(set2.find(x)!=set2.end()){
            cout<<x<<" ";
        }
    }
    return 0;
}