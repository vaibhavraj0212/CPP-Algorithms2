class Solution {
  public:
  
    int height(Node *root,int &d){
        if(root==NULL){
            return 0;
        }
        
        int l=height(root->left,d);
        int r=height(root->right,d);
        d=max(d,l+r);
        return 1+max(l,r);
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        // Your code here
        int d=0;
        height(root,d);
        return d+1;
        
        
        
    }
};
