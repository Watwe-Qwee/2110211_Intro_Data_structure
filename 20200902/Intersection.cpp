#include<bits/stdc++.h>
int main(){
    int N,M;
    cin>>N>>M;
    int temp;
    vector<int> v1,v2,output;
    for(int i=0;i<N;i++){
        cin>>temp;
        v1.push_back(temp);
    }
    for(int i=0;i<M;i++){
        cin>>temp;
        v2.push_back(temp);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<N;i++){
        if(find(v2.begin(),v2.end(),v1.at(i))!=v2.end()){
            if(find(output.begin(),output.end(),v1.at(i))==output.end())
                output.push_back(v1.at(i));
        }
    }
    for(auto &x:output){
        cout<<x<<" ";
    }
    return 0;
}