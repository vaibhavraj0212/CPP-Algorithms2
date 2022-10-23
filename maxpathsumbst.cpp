class Solution {
public:
    int maxpath(Node *root,int &d){
        
        if(root==NULL){
            return 0;
        }
        int lh=max(0,maxpath(root->left,d));
        int rh=max(0,maxpath(root->right,d));
        d=max(d,root->data+lh+rh);
        //return root->data+max(lh,rh);
        
    }
    int maxPathSum(Node* root)
    {
        // code here
        int d=-1000;
        maxpath(root,d);
        return d;
        
    }
};
