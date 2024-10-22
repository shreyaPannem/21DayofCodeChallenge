 https://www.geeksforgeeks.org/problems/height-of-binary-tree/1?page=1&difficulty%5B%5D=0&category%5B%5D=Tree&sortBy=submissions
  //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here
        if(node==nullptr){
            return 0;
        }
        int l = height(node->left)+1;
        int r = height(node->right)+1;
        return l<r?r:l;
    }