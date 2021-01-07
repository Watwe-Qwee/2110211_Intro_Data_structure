#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
 //write your code only in this function
    int temp;
    for(int i=0;i<=floor((a+b)/2);i++){
        temp=v.at(a+i);
        v[a+i]=v.at(b-i);
        v[b-i]=temp;
    }
}
int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,a,b);
 //display content of the vector
 for (auto &x : v)
 cout << x << " ";
 cout << endl;
}
