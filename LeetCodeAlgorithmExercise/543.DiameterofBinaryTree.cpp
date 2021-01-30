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
//	
//};
//
//class Solution {
//public:
//	int res = 1;
//	// 目标：计算二叉树的直径。
//	// 思路：写一个深度优先算法，计算出一个树的最大深度。
//	int diameterOfBinaryTree(TreeNode* root) {
//		dfp(root);
//		return res - 1;
//	}
//
//	// 节点为空返回0，默认返回左右节点中的最大值然后加上当前节点的1
//	int dfp(TreeNode* root) {
//		if (!root) {
//			return 0;
//		}
//		int left = dfp(root->left);
//		int right = dfp(root->right);
//		res = max(res, left + right + 1);
//
//		return max(left, right) + 1;
//	}
//};
//
//int main() {
//	return 0;
//}