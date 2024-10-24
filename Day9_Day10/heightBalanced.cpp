/* A binary tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *root,bool &valid){
        if(root==nullptr){
            return 0;
        }
        int l = height(root->left,valid)+1;
        int r=height(root->right,valid)+1;
        int diff=abs(l-r);
        if(diff==0 || diff ==1){
            int h = l<r?r:l;
            return h;
        }
        else {
        valid=0;
        return INT_MIN;
        }
        return valid;
    }
    bool isBalanced(Node *root)
    {
        bool valid =1;
        height(root,valid);
        return valid;
    }
};