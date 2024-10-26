class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
     void insert(Node *root,vector<int> &v,int level){
      if(root==nullptr){
          return;
      }
     
      if(level==v.size()){
          v.push_back(root->data);
      }
      
      insert(root->right,v,level+1);
      insert(root->left,v,level+1);
}
   vector<int> rightView(Node *root)
    {
     if(root==nullptr){
            return {};
        }
        vector<int> v;
        int level=0;
        insert(root,v,level);
        return v;  
    }
};