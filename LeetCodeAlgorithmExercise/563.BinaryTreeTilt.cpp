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
//    int sum;
//
//    // 目标：算出一个树坡度。坡度定义即为，该节点左子树的节点之和和右子树节点之和的 差的绝对值
//    // 整个树 的坡度就是其所有节点的坡度之和。
//    // 思路：写一个递归计算左子树和右子树的节点之和.再用一个全局变量记录坡度
//    int findTilt(TreeNode* root) {
//        dfp(root);
//        return sum;
//    }
//
//    // 用于计算一个节点之和
//    int dfp(TreeNode* root) {
//        if (!root) {
//            return 0;
//        }
//
//        // 计算左、右节点的节点数
//        int left = dfp(root->left);
//        int right = dfp(root->right);
//
//        // 在计算节点数的同时，记录坡度
//        sum += abs(left - right);
//
//        // 返回当前节点数
//        return left + right + root->val;
//    }
//};
//
//int main() {
//	return 0;
//}