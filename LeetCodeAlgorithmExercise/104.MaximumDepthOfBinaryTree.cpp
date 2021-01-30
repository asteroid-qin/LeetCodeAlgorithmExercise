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
//    // 要求：拿到一个二叉树（可能为空），判断他的层数
//    // 目前的想法是：递归遍历这个树，需要新建一个方法加上一个最大值的参数
//    // 算了，直接看LeetCode解析：
//    // 如果我们知道了左子树和右子树的最大深度 ll 和 rr，那么该二叉树的最大深度即为
//    // max(l, r) + 1
//    // 根据这个公式就可以轻松写出递归
//    int maxDepth(TreeNode* root) {
//        // 如果传入的是一个空树，需要返回0
//        if (NULL == root) {
//            return 0;
//        }
//
//        // 这步实在是太妙了
//        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//    }
//};
//
//// 又是树问题，所以还是不测试了
//int main() {
//
//
//	return 0;
//}