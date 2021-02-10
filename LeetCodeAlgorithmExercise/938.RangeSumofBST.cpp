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
//    int sum = 0;
//
//    // 目标：计算二叉搜索树在【low，high】区间内的节点之和
//    // 思路：递归遍历一次二叉树就可以得到结果，但这里是二叉搜索树，所以可以进行优化。
//    // 如果当前节点的值大于hight，那么只递归它的左边
//    // 如果当前节点的值小于low，那么只递归它的右边
//    int rangeSumBST(TreeNode* root, int low, int high) {
//        if (!root) {
//            return 0;
//        }
//
//        if (root->val < low) {
//            return rangeSumBST(root->right, low, high);
//        }
//        else if (root->val > high) {
//            return rangeSumBST(root->left, low, high);
//        }
//
//        return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
//    }
//
//
//};
//
//int main() {
//	return 0;
//}