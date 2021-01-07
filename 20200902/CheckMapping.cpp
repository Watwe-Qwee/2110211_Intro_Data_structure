#include<bits/stdc++.h>

int main(){
    std::set<int> exitedNumber;
    int N;
    bool operating=true;
    int temp;
    std::cin>>N;
    for(int i=0;i<N;i++){
        std::cin>>temp;
        if(operating){
            if(temp<0||temp>N){
                operating=false;
                continue;
            }
            if(exitedNumber.find(temp)!=exitedNumber.end()){
                operating=false;
                continue;
            }
            else{
                exitedNumber.insert(temp);
            }
        }
    }
    if(operating){
        std::cout<<"YES";
    }
    else{
        std::cout<<"NO";
    }
    return 0;
}