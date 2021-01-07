#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> a,b;
    for(int i=0;i<4;i++){
        a.push(i);
    }
    for(int i=0;i<3;i++){
        b.push(i);
    }
    cout<<a<b;
    cout<<a==b;
    return 0;
}