 https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
 void count(Node *root,int &cnt){
    if(root==nullptr){
        return;
    }
    if(!root->left && !root->right){
        cnt++;
        return ;
    }
    count(root->left,cnt);
    count(root->right,cnt);
   }
int countLeaves(Node* root) {
    // Your code here
    int cnt=0;
   
    count(root,cnt);
    return cnt;
}
