



/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
stack<Node *> s1;
stack<Node *>s2;
vector<int> v;
s1.push(root);
while(!s1.empty()||!s2.empty()){
   if(!s1.empty()){
        while(!s1.empty()){
     Node *temp=s1.top();
     s1.pop();
     if(temp->right){
         s2.push(temp->right);
     }
     if(temp->left){
         s2.push(temp->left);
     }
     v.push_back(temp->data);
    }
   }
   else{
     while(!s2.empty()){
     Node *temp=s2.top();
     s2.pop();
     if(temp->left){
         s1.push(temp->left);
     }
     if(temp->right){
         s1.push(temp->right);
     }
     v.push_back(temp->data);
    }
   }
}
return v;
}