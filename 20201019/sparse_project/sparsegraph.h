#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here

#include<vector>
#include<set>
using namespace std;

class SparseGraph{
public:
    
    SparseGraph() {
        // Your code here
       mSize=3;
       T=false;
       E.resize(mSize);
    }

    SparseGraph(int n_in) {
        // Your code here
        mSize=n_in;
        T=false;
        E.resize(mSize);
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        this -> mSize = G.mSize;
        this -> T =G.T;
        this -> E = G.E;
        this -> A = G.A;
    }

    void AddEdge(int a, int b) {
        // Your code here
        if(T){
            std::swap(a,b);
        }
        E[a].insert(b);
        A.insert(a);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if(T){
            std::swap(a,b);
        }
        E[a].erase(b);
        if(E[a].size()==0){
            A.erase(a);
        }
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if(T){
            std::swap(a,b);
        }
        if(A.find(a)==A.end()){
            return false;
        }
        return E[a].find(b)!=E[a].end();
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph temp(*this);
        temp.T=!T;
        return temp;
    }

protected:
    // Your code here
    int mSize;
    bool T;
    vector<set<int > > E;
    set<int> A;
};
#endif // __SPARSE_GRAPH_H__