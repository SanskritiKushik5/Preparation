/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void preorderTraversal(TreeNode<int> * root, vector<int> &ans){
    if(root == NULL) return;
    ans.push_back(root->data);
    preorderTraversal(root->left, ans);
    preorderTraversal(root->right, ans);
}
vector<int> preOrder(TreeNode<int> * root){
    vector<int>ans;
    preorderTraversal(root,ans);
    return ans;
}
