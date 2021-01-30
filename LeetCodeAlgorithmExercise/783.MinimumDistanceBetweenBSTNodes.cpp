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
//class MyInt {
//public:
//    int val;
//    int size;
//
//    void push(int val) {
//        this->val = val;
//        size++;
//    }
//};
//
//class Solution {
//public:
//
//
//    int res = INT_MAX;
//    // 如果不适用long，除了使用vector以外，也可以自己写一个封装类型
//    MyInt pre;
//    
//    // 目标：求BST中任意两节点的差的最小值。
//    // 思路：根据BST的特殊性质，可以把这个问题转成排序数组的差最小值的问题。
//    // 需要特别注意的是，需要用变量记录上一个数的值。因为要过滤掉第一次，所以可以自己封装一个int
//    int minDiffInBST(TreeNode* root) {
//        dfs(root);
//        return res;
//    }
//
//    void dfs(TreeNode* root) {
//        if (!root) {
//            return;
//        }
//
//        dfs(root->left);
//
//        if (pre.size != 0) {
//            res = min(res, root->val - pre.val);
//            pre.val = root->val;
//        }
//        else {
//            pre.push(root->val);
//        }
//
//        dfs(root->right);
//    }
//};
//
//int main() {
//	return 0;
//}