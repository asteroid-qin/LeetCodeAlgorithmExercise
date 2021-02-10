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
//    // 目标：判断当前数的每个节点是否相等
//    // 思路：递归即可...
//    // 还可以再优化，因为题目限制条件说了root肯定不为空，所以代码可以进一步优化
//    bool isUnivalTree(TreeNode* root) {
//        if (!root) {
//            return true;
//        }
//
//        if ((root->left && root->left->val != root->val) ||
//            (root->right && root->right->val != root->val)) {
//            return false;
//        }
//
//        return isUnivalTree(root->left) && isUnivalTree(root->right);
//    }
//
//    // 优化非空判断（不过好像其实没差多少）
//    bool isUnivalTreeP(TreeNode* root) {
//        bool l = (!root->left || (root->val == root->left->val && isUnivalTreeP(root->left)));
//        bool r = (!root->right || (root->val == root->right->val && isUnivalTreeP(root->right)));
//
//        return l && r;
//    }
//};
//
//int main() {
//	return 0;
//}