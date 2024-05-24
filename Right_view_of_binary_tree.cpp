class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> res;
       recur(root,0,res);
       return res;
    }
    public:
    void recur(Node* root,int level,vector<int> &res){
        if(root==NULL){
            return ;
        }
        if(res.size()==level){
            res.push_back(root->data);
        }
        recur(root->right,level+1,res);
        recur(root->left,level+1,res);
    }
};
