/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int> &res) { 
     if(root!=NULL){
        inorder(root->left,res);
        res.push_back(root->val);
        inorder(root->right,res); 
    } 
    }
     int kthSmallest(TreeNode* root, int k) {
      vector<int> vc;
      inorder(root,vc);
      return vc[k-1];
    }
};
//2nd Approach
class Solution {
public:
void inorder(TreeNode* root,vector<int> &res) {
int count=0,m=0;
    void inorder(TreeNode* root, int k) {
        if (root != NULL) {
        inorder(root->left, k);
        count++;
        if (count == k) {
            m=root->val;
            return;
        }
        inorder(root->right, k);
    }
    
}
    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return m;
    }
};
