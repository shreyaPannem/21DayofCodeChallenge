/* 
 *  struct Node {
 *    int data;
 *    Node *left, *right;
 *  };
 *
 *  The above structure defines a tree node.
 */
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
int kSmallest(Node* root, int k) {
  // Write your code here
  if(root==nullptr){
    return 0; 
  }
  vector<int> v;
    inorder(root,v);
  return v[k-1];
}