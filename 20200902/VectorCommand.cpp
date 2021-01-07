#include<bits/stdc++.h>
#include<algorithm>
#include<string>

int main(){
    ios_base::sync_with_stdio(false);std::cin.tie(0);
    int N;
    std::cin>>N;
    std::vector<int> vect;
    for(int i=0;i<N;i++){
        std::string temp;
        int value; 
        std::cin>>temp;
        if(!temp.compare("pb")){
            std::cin>>value;
            vect.push_back(value);
        }
        else if(!temp.compare("sa")){
            std::sort(vect.begin(),vect.end());
        }
        else if(!temp.compare("sd")){
            std::sort(vect.begin(),vect.end(),greater<int>());
        }
        else if(!temp.compare("r")){
            std::reverse(vect.begin(),vect.end());
        }
        else {
            std::cin>>value;
            vect.erase(vect.begin()+value);
        }
    }
    for(auto &x:vect){
        std::cout<<x<<" ";
    }
}