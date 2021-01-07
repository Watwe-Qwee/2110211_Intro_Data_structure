#include<bits/stdc++.h>
using namespace std;
class Chef{
    public:
    int doneTime,cookTime;
    Chef(int doneTime,int cookTime){
        this -> doneTime=doneTime;
        this -> cookTime=cookTime;
    }
    bool operator<(const Chef &other)const{
        return doneTime>other.doneTime;
    }
    void done(){
        doneTime+=cookTime;
    }
};
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int N,M;
    std::cin>>N>>M;
    std::priority_queue<Chef> workingChef;
    int X=0;
    for(int i=0,temp;i<N&&M>0;i++){
        std::cin>>temp;
        Chef chef(temp,temp);
        workingChef.push(chef);
        M--;
        std::cout<<X<<std::endl;
    }
    while(M>0){
        Chef tempChef=workingChef.top();
        X=tempChef.doneTime;
        std::cout<<X<<std::endl;
        tempChef.done();
        workingChef.pop();
        workingChef.push(tempChef);
        M--;
    }
}