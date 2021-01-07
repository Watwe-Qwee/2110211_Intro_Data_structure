#include<bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    int n,m;
    vector<pair<int,int > > launchDates;
    cin>>n>>m;
    for(int i=0,temp1,temp2;i<n;i++){
        cin>>temp1>>temp2;
        launchDates.push_back(make_pair(temp1,temp2));
    }
    sort(launchDates.begin(),launchDates.end());
    for(int i=0,temp1,temp2;i<m;i++){
        cin>>temp1>>temp2;
        pair<int,int> tempLauchDate(temp1,temp2),output;
        if(tempLauchDate<launchDates[0]){
            cout<<"-1 -1 ";
            continue;
        }
        if(binary_search(launchDates.begin(),launchDates.end(),tempLauchDate)){
            cout<<"0 0 ";
            continue;
        }
        if(tempLauchDate>launchDates[n-1]){
            cout<<launchDates[n-1].first<<" "<<launchDates[n-1].second<<" "; 
            continue;
        }
        auto it=lower_bound(launchDates.begin(),launchDates.end(),tempLauchDate)-1;
        cout<<(*it).first<<" "<<(*it).second<<" "; 
    }
    return 0;
}