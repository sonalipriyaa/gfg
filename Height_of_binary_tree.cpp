int height(struct Node* node)
{
    //code here
    if(node==NULL){
        return 0;
    }
    int lh=height(node->left);
    int rh=height(node->right);
    if(lh>rh){
        return 1+lh;
    }
    else{
        return 1+rh;
    }
}
