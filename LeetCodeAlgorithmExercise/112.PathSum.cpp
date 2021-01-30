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
//	// 又是解决树的问题：
//	// 拿到一个数字，需要从根结点开始往下遍历，如果恰好每个遍历节点的值加起来等于要找的值就返回true
//	// 以最简单的模型类推复杂的情况
//	// 很遗憾，没有一次过（因为题意：需要一直算到叶节点上的完整路径才是正确的）
//	// 好吧，是我想当然了。因为可能存在负值，所以不需要判断当前值的大于小于，只需要判断等于
//	bool hasPathSum(TreeNode* root, int sum) {
//		// 当前节点为null应该就需要退出
//		if (root == NULL) {
//			return false;
//		}
//		// 如果当前节点是根节点
//		if (root->left == NULL && root->right == NULL) {
//			return sum == root->val;
//		}
//
//		// 开始递归
//		return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);		
//	}
//};
//
//int main() {
//	// 测试一下自己写的，虽然有点潦草，但是感觉功能是没有问题的
//	Solution s;
//	TreeNode* n1 = new TreeNode(-2);
//	TreeNode* n2 = new TreeNode(-3);
//	n1->right = n2;
//
//	// 开始调用
//	bool isExited = s.hasPathSum(n1, -5);
//
//	if (isExited) {
//		cout << "存在！！" << endl;
//	}
//	else {
//
//		cout << "不存在！！" << endl;
//	}
//
//	return 0;
//}