class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node *node){
        if(node==NULL){
            return 0;
        }
        int lh=height(node->left);
        int rh=height(node->right);
        return (1+max(lh,rh));
    }
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(root==NULL){
            return 1;
        }
        int lh=height(root->left);
        int rh=height(root->right);
        if (abs(lh - rh) <= 1 && isBalanced(root->left)
        && isBalanced(root->right)){
            return 1;
        }
        else{
            return 0;
        }
        
    }
};

