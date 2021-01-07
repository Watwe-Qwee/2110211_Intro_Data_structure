#include<bits/stdc++.h>
using namespace std; 
int main(){
    int N,M,A;
    std::cin>>N>>M>>A;
    int amount[N];
    map<int,int> bidMap[N];
    priority_queue<pair<int,int > > bidRecord[N];
    char type;
    int user,item,price;
    vector<int> owner[M];
    for(int i=0;i<N;i++){
        cin>>amount[i];
    }
    for(int i=0;i<A;i++){
        cin>>type>>user>>item;
        if(type=='B'){
            cin>>price;
            bidMap[item-1][user-1]=price;
        }
        else if(type=='W' ){
            bidMap[item-1].erase(user-1);
        }
    }
    for(int i=0;i<N;i++){
        for(auto &x:bidMap[i]){
            bidRecord[i].push(make_pair(x.second,x.first));
        }
    }

    for(int i=0;i<N;i++){
        while(!bidRecord[i].empty()&&amount[i]>0){
            int person=bidRecord[i].top().second;
            if(!count(owner[person].begin(),owner[person].end(),i+1)){
                owner[person].push_back(i+1);
            }
            bidRecord[i].pop();
            amount[i]--;
        }
    }
    for(int i=0;i<M;i++){
        if(owner[i].size()>0){
            for(auto &x:owner[i]){
                cout<<x<<" ";
            }
        }
        else{
            cout<<"NONE";
        }
        cout<<endl;
    }
}