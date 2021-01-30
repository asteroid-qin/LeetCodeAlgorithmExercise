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
//    // 目标：计算一个数的左叶子数之和
//    // 思路：如何判断一个数是叶子数？左右节点为null，如何判断这个树是左子树？从当前节点往左看
//    int sumOfLeftLeaves(TreeNode* root) {
//        return root ? dfs(root) : 0;
//    }
//
//    // 方法里的if条件意味着除了初始root为null外，递归调用绝对不会传入null
//    int dfs(TreeNode* root) {
//        // 记录左叶子树节点的和
//        int sum = 0;
//
//        if (root->left) {
//            // 如果左边不为空，计算左边的叶子数之和
//            sum = isLeafNode(root->left) ? root->left->val : sumOfLeftLeaves(root->left);
//        }
//
//        if (root->right && !isLeafNode(root->right)) {
//            sum += sumOfLeftLeaves(root->right);
//        }
//
//        return sum;
//    }
//
//    bool isLeafNode(TreeNode* node) {
//        return !node->left && !node->right;
//    }
//};
//
//int main() {
//	return 0;
//}