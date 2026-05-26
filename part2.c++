// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;


class TreeNode {
    public:
    
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x){
        
        val = x;
        left = NULL;
        right = NULL;
        
    }
};

void preorder(TreeNode* root){
    
    if(root == NULL){
        return;
    }
    
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
    
    
    
}

void Inorder(TreeNode* root){
    
    if(root == NULL){
        return;
    }
    
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
    
    
    
}

void postorder(TreeNode* root){
    
    if(root == NULL){
        return;
    }
    
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
    
    
}

void levelorder(TreeNode* root){

    if(root == NULL){
        return;
    }

    queue<TreeNode*> q;

    q.push(root);

    while(!q.empty()){
        
        int s = q.size();
        
        for(int i=0;i<s;i++){

        TreeNode* current = q.front();
        q.pop();

        cout << current->val << " ";

        if(current->left){
            q.push(current->left);
        }

        if(current->right){
            q.push(current->right);
        }
        }
        cout<<endl;
    }

}


int main() {
    // Write C++ code here
    
    TreeNode* root = new TreeNode(1);
    
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    
    preorder(root);
    printf("\n");
    Inorder(root);
    printf("\n");

    postorder(root);
    
    printf("\n");
    levelorder(root);
    

    return 0;
}