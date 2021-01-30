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
//	// 很明显，根据题意是要判断一个一个树是否是二叉平衡树
//	// 可以分治为判断一个节点的左节点的高度减去右节点的高度的绝对值是否小于等于1
//	bool isBalanced(TreeNode* root) {
//		// 直接调用下面的递归方法（这里为什么是0也有点苦恼）
//		return getHeight(root) >= 0;
//	}
//
//	// 需要借助一个方法，因为接受高度需要使用int
//	int getHeight(TreeNode* root) {
//		// 先去除掉当前节点为空的情况。
//		// 或者当前节点为最底下的节点，高度需要从0开始计算
//		if (NULL == root) {
//			return 0;
//		}
//
//		// 递归拿到左边树和右边树的高度
//		int leftHeight = getHeight(root->left);
//		int rightHeight = getHeight(root->right);
//
//		// 无法平衡的条件
//		if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1) {
//			return -1;
//		}
//		else {
//			// 不然的话，需要把高度给叠起来
//			return max(leftHeight, rightHeight) + 1;
//		}
//
//
//	}
//};
//
//int main() {
//
//
//	return 0;
//}