class Solution {
    public:
    bool isLeaf(Node* node) {
    return (node && !node->left && !node->right);
}
public:
    void leftboundary(Node * root,vector<int> &res){
        Node* cur=root->left;
        while(cur){
            if(!isLeaf(cur)){
                res.push_back(cur->data);
            }
            if(cur->left){
                cur=cur->left;
            }
            else{
                cur=cur->right;
            }
        }
        
    }
    public:
    void rightboundary(Node* root,vector<int> &res){
        Node* cur=root->right;
        vector<int> temp;
        while(cur){
            if(!isLeaf(cur)){
                temp.push_back(cur->data);
            }
            if(cur->right){
                cur=cur->right;
            }
            else{
                cur=cur->left;
            }
        }
        for(int i=temp.size()-1;i>=0;--i){
            res.push_back(temp[i]);
        }
    }
    public:
    void addleaves(Node* root,vector<int> &res){
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left){
            addleaves(root->left,res);
        }
        if(root->right){
            addleaves(root->right,res);
        }
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> res;
        if(!root){
            return res;
        }
        if(!isLeaf(root)){
            res.push_back(root->data);
        }
        leftboundary(root,res);
        addleaves(root,res);
        rightboundary(root,res);
        return res;
    }
};
