#include<bits/stdc++.h>
using namespace std;
name = {“John”, “Jack”, “Leo”, “Eric”, “Robert”};
father={(“Leo”,”John”), (“John”,”Eric”), (“John”,”Robert”), (“Robert”,”Jack”)};
void printGrandfatherGrandson(const vector<string>& name, const vector<pair<string,string>>& parent) {
    map<string,vector<string>> relation;
    for(auto &[father,son]:parent){
        relation[father].push_back(son);
    }
    for(auto &grandFather:name){
        if(relation.find(grandFather)!=relation.end()){
            for(auto &son:relation[grandFather])
            {
                if(relation.find(son)!=relation.end())
                {
                    cout<<grandFather<<" is a grandfather with the following grandson(s): ";
                    for(auto &grandSon:relation[son])
                        cout<<grandSon<<" ";
                }
            }
        }
    }
}   