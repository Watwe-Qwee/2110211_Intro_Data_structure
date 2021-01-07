#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include<vector>
class Tree{
    class Node{
        public:
            friend class Tree;
            Node() {data = -1; left = NULL; right = NULL;}
            Node(const int x, Node* left, Node* right) : data(x), left(left), right(right) {}

        protected:
            int data;
            Node* left;
            Node* right;
    };
public:

    Tree() {
        mRoot = NULL;
        mSize = 0;
    }

    ~Tree() {
        clear(mRoot);
    }

    void clear(Node*& r) {
        if (!r) return;
        clear(r->left);
        clear(r->right);
        delete r;
    }

    void insert(int x) {
        insertAt(mRoot, x);
    }
    bool isSameBinaryTree(Tree& t) {
        // Insert your code here
        if(mRoot==NULL && t.mRoot==NULL){
            return true;
        }
        else if(mRoot==NULL || t.mRoot==NULL){
            return false;
        }
        if(mSize!=t.mSize){
            return false;
        }
        bool isSame =true;
        travel(mRoot,t.mRoot,isSame);
        return isSame;
    }
    void travel(Node *vertex1,Node *vertex2,bool &isSame){
        if(vertex1==NULL){
            return ;
        }
        if(vertex2==NULL){
            return ;
        }
        if(vertex1->data!=vertex2->data){
            isSame = false;
            return ;
        }
        //std::cout<<vertex1->data<<" "<<vertex2->data<<"\n";
        travel(vertex1->left,vertex2->left,isSame);
        travel(vertex1->right,vertex2->right,isSame);
    }
    // You can also put your code here

protected:
    void insertAt(Node*& r, int x) {
        if (!r) {
           r = new Node(x, NULL, NULL);
           mSize++;
           return;
        }
        if (r->data == x) return; // Do nothing
        if (x < r->data) insertAt(r->left, x); else
        insertAt(r->right, x);
    }
    Node* mRoot;
    int mSize;

};

#endif // TREE_H_INCLUDED
