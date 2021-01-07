#include<bits/stdc++.h>
using namespace std;
class LaunchDate{
    public:
        int year,month;
        LaunchDate(int year,int month){
            this->year=year;
            this->month=month;
        }
        bool operator<(const LaunchDate& other) const{
            if(year==other.year){
                return month<other.month;
            }
            return year<other.year;
        }
        bool operator==(const LaunchDate& other) const{
            return year==other.year&&month==other.month;
        }
        void show(){
            cout<<year<<" "<<month<<" "; 
        }
};
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0); 
    vector<LaunchDate> launchDates;
    int n,m;
    cin>>n>>m;
    for(int i=0,temp1,temp2;i<n;i++){
        cin>>temp1>>temp2;
        launchDates.push_back(LaunchDate(temp1,temp2));
    }
    for(int i=0,temp1,temp2;i<m;i++){
        cin>>temp1>>temp2;
        LaunchDate tempLaunchDate(temp1,temp2),outputLauchDate(temp1,temp2);
        if(tempLaunchDate<launchDates[0]){
            cout<<"-1 -1 ";
            continue;
        }
        if(binary_search(launchDates.begin(),launchDates.end(),tempLaunchDate)){
            cout<<"0 0 ";
            continue;
        }
        for(auto &temp:launchDates){
            if(temp<tempLaunchDate){
                outputLauchDate=temp;
            }
            else 
                break;
        }
        outputLauchDate.show();
        
    }    
    return 0;
}