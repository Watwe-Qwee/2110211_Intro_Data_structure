#include<bits/stdc++.h>
class Chef{
    public:
    int doneTime,cookTime;
    Chef(int dTime,int cTime){
        doneTime=dTime;
        cookTime=cTime;
    }
    bool operator<(const Chef &other)const{
        if(doneTime == other.doneTime){
            return cookTime>other.cookTime;
        }
        return doneTime>other.doneTime;
    }
    void done(){
        doneTime+=cookTime;
    }
};
Chef make_chef(int doneTime,int cookTime){
    return Chef(doneTime,cookTime);
}
int main(){
    int N,M;
    std::cin>>N>>M;
    std::vector<int> output;
    std::priority_queue<Chef> availableChef,workingChef;
    for(int i=0,temp;i<N;i++){
        std::cin>>temp;
        availableChef.push(make_chef(temp,temp));
    }
    int X=0;
    while(M>0){
        while(!availableChef.empty()&&M>0){
            workingChef.push(availableChef.top());
            availableChef.pop();
            M--;
            output.push_back(X);
        }
        X=workingChef.top().doneTime;
        while(X==workingChef.top().doneTime){
            Chef tempChef=workingChef.top();
            tempChef.done();
            availableChef.push(tempChef);
            workingChef.pop();
        }
    }
    for(auto &x:output){
        std::cout<<x<<std::endl;
    }
}