
  // Definition for a binary tree node.
 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    int min, max, sum = 0;
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        min = L;
        max = R;
        
        traverseTree(root);
        
        return sum;
    }
    
    void traverseTree(TreeNode* root){
        
        if(root->val >= min && root->val <= max){
            sum += root-> val;
        }
        
        if(root->left != nullptr && root->val > min){
            traverseTree(root->left);
        }
        
        if(root->right != nullptr && root->val < max){
            traverseTree(root->right);
        }
    }
    
};