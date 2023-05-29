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
    vector<int> vect;
    void Inorder(TreeNode *head)
    {
        if(head)
        {
            Inorder(head->left);
            vect.push_back(head->val);
            Inorder(head->right);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        Inorder(root);
        int i=0,j=vect.size()-1;
        while(i<j)
        {
            if(vect[i]+vect[j]==k)
            {
                return true;
            }
            else if(vect[i]+vect[j]>k)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};