int solve(TreeNode* root, int &diameter){

    if(root == NULL){
        return 0;
    }

    int left = solve(root->left, diameter);
    int right = solve(root->right, diameter);

    diameter = max(diameter, left + right + 1);

    return 1 + max(left, right);
}

int Diameter(TreeNode* root){

    int diameter = 0;

    solve(root, diameter);

    return diameter;
}