# 94.二叉树的中序遍历

## 解题时间

2025-12-6

## 题目描述

给定一个二叉树的根节点 `root` ，返回它的 **中序** 遍历。

## 题解

```cpp
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
    void inorder(TreeNode *root,vector<int>& result) {
        if (root == nullptr) {
            return;
        }
        inorder(root->left,result);
        result.push_back(root->val);
        inorder(root->right,result);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorder(root,res);
        return res;
    }
};
```
