#include<bits/stdc++.h>
#include <iomanip> 
using namespace std;

int main(){
    cout << std::fixed << std::setprecision(2); 
    int n;
    map<int,pair < float , int > > courseIdCollector;
    map<string, pair < float , int > > userCollector;
    int courseId,score;
    string user;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>courseId>>user>>score;
        courseIdCollector[courseId].first+=score;
        courseIdCollector[courseId].second++;
        userCollector[user].first+=score;
        userCollector[user].second++;
    }
    for(auto &x:courseIdCollector){
      cout<<x.first<<" "<< (x.second.first ) / x.second.second<<endl; 
    }
    for(auto &x:userCollector){
      cout<<x.first<<" "<< (x.second.first) / x.second.second<<endl; 
    }

}