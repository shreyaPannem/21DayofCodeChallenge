https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Tree&sortBy=submissions
long int sumBT(Node* root)
{
 if(root==nullptr){
     return 0;
 }  
 return sumBT(root->left)+sumBT(root->right)+root->key;
}