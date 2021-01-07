#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include<stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  //DON"T FORGET TO RETURN THE RESULT
  stack<pair<int,int> > vstack;
  vstack.push(v[0]);
  vstack.push(v[1]);
  int i=2,j=v.size();
  int v1,v2;
  while(vstack.size()!=1 || i<j){
    if(v[i].first==0){
      v1=vstack.top().second;
      vstack.pop();
      v2=vstack.top().second;
      vstack.pop();
      if(v[i].second==0){
        vstack.push(make_pair(1,v2+v1));
      }
      else if(v[i].second==1){
        vstack.push(make_pair(1,v2-v1));
      }
      else if(v[i].second==2){
        vstack.push(make_pair(1,v2*v1));
      }
      else if(v[i].second==3){
        vstack.push(make_pair(1,v2/v1));
      }
      //cout<<v2<<"operate"<<v1<<endl;
    }
    else if(i<j){
      vstack.push(v[i]);
    }
    i++;
  }
  return vstack.top().second;
}

#endif
