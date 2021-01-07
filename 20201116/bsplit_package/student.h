#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node *vertex = mRoot , *temp;
  while(vertex!=NULL){
    if(mLess(vertex->data.first,val)){
      vertex=vertex->right;
    }
    else{
      node *temp2 = vertex->left;
      if(vertex==mRoot){
        mRoot=vertex->left;
        if(vertex->left!=NULL){
          vertex->left->parent = NULL;
        }
      }
      else{
        child_link(vertex->parent,vertex->data.first) = vertex->left;
        if(vertex->left!=NULL){
          vertex->left->parent = vertex->parent;
        }
      }
      vertex->left = NULL; 

      if(result.mRoot==NULL){
        result.mRoot=vertex;
        vertex->parent = NULL;
      }
      else{
        temp->left = vertex;
        vertex->parent = temp;
      }

      temp = vertex;
      vertex = temp2;

    }
  }
  return result;
}

#endif
