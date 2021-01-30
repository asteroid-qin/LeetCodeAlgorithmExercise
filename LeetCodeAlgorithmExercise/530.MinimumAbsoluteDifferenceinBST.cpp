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
//    int res = INT_MAX, pre = -1;
//
//    // 目标：求二叉搜索树差的绝对值的最小值
//    // 前面遇到过求BST的众数，现在求差的绝对值..
//    // 思路：中序遍历，求二叉树的差的绝对值的最小值转换成求数组的最小值问题
//    int getMinimumDifference(TreeNode* root) {
//        dfp(root);
//        return res;
//    }
//
//    void dfp(TreeNode* root) {
//        if (!root) {
//            return;
//        }
//        dfp(root->left);
//        update(root->val);
//        dfp(root->right);
//    }
//
//    void update(int num) { 
//        if (pre != -1) {
//            res = min(res, abs(pre - num));
//        }
//
//        pre = num;
//    }
//};
//
//int main() {
//	return 0;
//}