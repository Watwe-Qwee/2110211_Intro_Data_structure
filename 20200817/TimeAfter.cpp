#include <iostream>
using namespace std;
int main(){
    int H,M,X;
    cin>>H>>M>>X;
    M=M+X;
    if(M>=60){
        H=H+M/60;
        M=M%60;
    }
    if(H>=24){
        H=H%24;
    }
    if(H<10){
        cout<<"0"<<H<<" ";
    }
    else {
        cout<<H<<" ";
    }
    if(M<10){
        cout<<"0"<<M;
    }
    else {
        cout<<M;
    }
    return 0;
}