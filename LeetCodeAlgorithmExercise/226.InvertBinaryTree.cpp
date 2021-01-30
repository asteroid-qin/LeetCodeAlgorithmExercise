//#include<iostream>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//public:
//    // 目标：反转二叉树
//    // 思路：使用递归！！（看到二叉树就应该想到递归）
//    TreeNode* invertTree(TreeNode* root) {
//        // 假如有只有三个节点的二叉树
//        // 需要把它反转，就得把它的左边换成右边
//        if (!root) {
//            return nullptr;
//        }
//
//        // 交换
//        /*
//            已解决最简单的情况，现在需要考虑如何往递归上套
//            很明显，在赋值前，把左节点反转和右节点反转后再设置才正常
//        */
//        root->left = invertTree(root->left);
//        root->right = invertTree(root->right);
//
//        TreeNode* temp = root->left;
//        root->left = root->right;
//        root->right = temp;
//
//        // 如此，反转完毕，最后返回二叉树
//        return root;
//    }
//};
//
//int main() {
//	return 0;
//}