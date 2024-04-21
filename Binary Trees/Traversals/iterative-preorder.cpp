#include <stack>
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
vector<int> preOrder(TreeNode<int> * root){
    vector<int>ans;
    if(root == NULL) return ans;
    stack<TreeNode<int>*> st;
    st.push(root);
    while(!st.empty()){
        TreeNode<int> *temp = st.top();
        st.pop();
        ans.push_back(temp->data);
        if(temp->right != NULL)
            st.push(temp->right);
        if(temp->left != NULL)
            st.push(temp->left);
    }
    return ans;
}

