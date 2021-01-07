// Your code here

KeyT getValueOfMostImbalanceNode() {
    // Your code here
    KeyT temp = mRoot->data.first;
    int max =-1;
    getDepth(mRoot,max,temp);
    return temp;
}
int getDepth(node *vertex,int &max,KeyT &value){
    if(vertex == NULL){
        return -1;
    }
    int depth1 = 1 + getDepth(vertex->right,max,value);
    int depth2 = 1 + getDepth(vertex->left,max,value);
    int imbalanceVal = abs(depth1-depth2);
    if(imbalanceVal>max){
        max = imbalanceVal;
        value = vertex->data.first;
    }
    else if(imbalanceVal==max){
        if(mLess(vertex->data.first,value)){
            value = vertex->data.first;
        }
    }
    return std::max(depth1,depth2);
}
