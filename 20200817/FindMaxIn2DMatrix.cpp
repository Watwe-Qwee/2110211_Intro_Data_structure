#include<iostream>
using namespace std;
int main(){
    int N,M;
    int R;
    cin>>N>>M>>R;
    int array[N][M];
    int checker[R][4];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<R;i++){
        for(int j=0;j<4;j++){
            cin>>checker[i][j];
        }
    }
    int column,row,max;
    for(int i=0;i<R;i++){
        row=checker[i][2]-checker[i][0];
        column=checker[i][3]-checker[i][1];
        if(row<0||column<0){
            cout<<"INVALID"<<endl;
            continue;
        }
        else if ((checker[i][0]>N)||(checker[i][1]>M)){
            cout<<"OUTSIDE"<<endl;
            continue;
        }
        else {
            max=array[checker[i][0]-1][checker[i][1]-1];
            if(checker[i][2]>N){
                checker[i][2]=N;
            }
            if(checker[i][3]>M){
                checker[i][3]=M;
            }
            for(int j=checker[i][0]-1;j<checker[i][2];j++){
                for(int k=checker[i][1]-1;k<checker[i][3];k++){
                    if(max<array[j][k]){
                        max=array[j][k];
                    }
                    //cout<<array[j][k]<<" ";
                }
            }
            cout<<max<<endl;
        }
    }
    return 0;
}