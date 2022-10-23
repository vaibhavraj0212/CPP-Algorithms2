int countLeaves(Node* root)
{
  // Your code here
  
  if(root==NULL){
      return 0;
  }
  else if(root->left==NULL and root->right==NULL){
      return 1;
  }
  int l=countLeaves(root->left);
  int r=countLeaves(root->right);
  return l+r;
}
