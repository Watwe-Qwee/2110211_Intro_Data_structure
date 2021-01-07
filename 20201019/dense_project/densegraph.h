#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
#include <set>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n=3;
        T=false;
        E.resize(n);
    }

    DenseGraph(int n_in) {
        // Your code here
        n=n_in;
        T=false;
        E.resize(n);
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        this -> n = G.n;
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

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph temp(*this);
        temp.T=!T;
        return temp;
    }

protected:
    int n;
    bool T;
    vector<set<int > > E;
    set<int> A;
    // Your code here
};
#endif // __DENSE_GRAPH_H__
