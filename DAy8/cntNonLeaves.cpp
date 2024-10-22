https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
class Solution {
  public:
  void count(Node* root, int &cnt){
      if(root==nullptr){
          return;
      }
      if(root->left || root->right){
          cnt++;
      }
      count(root->left,cnt);
      count(root->right,cnt);
  }
    int countNonLeafNodes(Node* root) {
        // Code here
        int cnt=0;
        count(root,cnt);
        return cnt;
    }
};