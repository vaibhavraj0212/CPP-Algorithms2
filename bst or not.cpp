class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
        // Your code here
        return checkbst(root,INT_MIN,INT_MAX);
    }
    bool checkbst(Node *root,int minval,int maxval){
        
        if(root==NULL){
            return true;
        }
        if(root->data < minval or root->data > maxval){
            return false;
        }
        return checkbst(root->left,minval,root->data) and checkbst(root->right,root->data,maxval);
    }
};
