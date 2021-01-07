#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,m;
    cin>>n>>m;
    vector<int> bottomedge,upperedge;
    set<pair<int,int > > scope;
    for(int i=0,temp1,temp2;i<n;i++){
        cin>>temp1>>temp2;
        bottomedge.push_back(temp1);
        upperedge.push_back(temp2);
        scope.insert(make_pair(temp1,temp2));
    } 
    sort(bottomedge.begin(),bottomedge.end());
    sort(upperedge.begin(),upperedge.end());
    for(int i=0,temp;i<m;i++){
        cin>>temp;
        auto upperbound=upper_bound(bottomedge.begin(),bottomedge.end(),temp)-1,lowerbound=lower_bound(upperedge.begin(),upperedge.end(),temp);
        if(scope.find(make_pair(*upperbound,*lowerbound))!=scope.end()){
            cout<<"1 ";
        }
        else{
            cout<<"0 ";
        }
    }
    return 0;
}