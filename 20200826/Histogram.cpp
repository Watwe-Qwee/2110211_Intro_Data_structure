#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    set<string> word;
    map<string,int> output;
    string temp;
    for(int i=0;i<N;i++){
        cin>>temp;
        if(word.find(temp)!= word.end()){
            output[temp]++;
        }
        else{
            word.insert(temp);
        }
    }

    for(auto &w:output){
        cout<<w.first<<" "<<w.second+1<<endl;        
    }
    return 0;
}