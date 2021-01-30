//#include<iostream>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode() : val(0), left(nullptr), right(nullptr) {}
//	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//	TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//class Solution {
//public:
//	// 根据题意：给定一个树，求他的最短深度（是不是觉得很熟悉？104是求最大深度）
//	// 难受，树确实是我的薄弱项，得找个时间好好补习补习
//	int minDepth(TreeNode* root) {
//        if (root == nullptr) {
//            return 0;
//        }
//
//        if (root->left == nullptr && root->right == nullptr) {
//            return 1;
//        }
//
//        int min_depth = INT_MAX;
//        if (root->left != nullptr) {
//            min_depth = min(minDepth(root->left), min_depth);
//        }
//        if (root->right != nullptr) {
//            min_depth = min(minDepth(root->right), min_depth);
//        }
//
//        return min_depth + 1;
//	}
//};
//
//int main() {
//
//	return 0;
//}