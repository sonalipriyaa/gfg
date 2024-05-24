class Solution {
  public:
  int res=0;
    // Function to return the diameter of a Binary Tree.
    int height(Node* node){
        
        if(node==NULL){
            return 0;
        }
        int lh=height(node->left);
        int rh=height(node->right);
        res=max(res,1+lh+rh);
        return (1+max(lh,rh));
    }
    int diameter(Node* root) {
        // Your code here
        int data=height(root);
        return res;
    }
};
