#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;

  node *superRoot=new node(),*topBranch,*it;
  node *vertex;
  bool left = false;
  bool stop =false;

  vertex = mRoot;
  superRoot->right = mRoot;
  mRoot->parent = superRoot;

  while(true){
    //std::cout<<vertex->data.first<<" ";
    if(!mLess(vertex->data.first,val)){
      //std::cout<<1<<" ";
      topBranch = vertex;

      if(vertex->right==NULL&&vertex->left==NULL){
        stop = true;
      }

      it = topBranch;
      while(it->right != NULL){
        it=it->right;
      }

      if(result.mRoot!=NULL){
        node *resultRoot = result.mRoot;
        it->right = resultRoot;
        resultRoot->parent = it;
      }

      result.mRoot = topBranch;
      result.print();

      if(stop){
        break;
      }

      if(vertex->left!=NULL){
        vertex->parent->right = vertex->left;
        vertex->left->parent = vertex->parent;
        vertex = vertex->left;
        topBranch->left = NULL;
        left = true;
      }
      else{
        vertex->parent->right = NULL;
        left = false;
      }

      if(left){
        continue;
      }
    }
    
    if(vertex->right==NULL){
      break;
    }

    if(compare(topBranch->data.first,val)==0){
      break;
    }

    vertex = vertex->right;
  }

  mRoot->parent = NULL;
  mRoot=superRoot->right;
  delete superRoot;

  return result;
}

#endif
