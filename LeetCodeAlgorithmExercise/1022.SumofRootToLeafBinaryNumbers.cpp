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
//    // 目标：求从根到叶的二进制数之和
//    // 思路：用一个变量作为初始值，每次递归时就左移1位，最后在叶子节点，把这个值加入sum即可。最后返回这个sum
//    int sumRootToLeaf(TreeNode* root) {
//        dfs(root, 0);
//        return sum;
//    }
//    
//
//    void dfs(TreeNode* root, int num) {
//        if (!root) {
//            return;
//        }
//
//        num += root->val;
//
//        if (!root->left && !root->right) { // 叶子节点
//            sum += num;
//            return;
//        }
//
//        dfs(root->left, num << 1);
//        dfs(root->right, num << 1);
//    }
//};
//
//int main() {
//	return 0;
//}