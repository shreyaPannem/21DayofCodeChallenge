/* 
 *  struct Node {
 *    int data;
 *    Node *left, *right;
 *  };
 *
 *  The above structure defines a tree node.
 */
void inorder(Node *root,vector<int> &v){
  if(root==nullptr){
    return;
  }
  inorder(root->left,v);
  v.push_back(root->data);
  inorder(root->right,v);
}
int isBinarySearchTree(Node* root) {
  // Write your code here
  if(root==nullptr){
    return 1;
  }
 vector<int> v;
  inorder(root,v);
  for(int i=0;i<v.size()-1;i++){
    if(v[i]>v[i+1])
      return 0;
  }
  return 1;
}