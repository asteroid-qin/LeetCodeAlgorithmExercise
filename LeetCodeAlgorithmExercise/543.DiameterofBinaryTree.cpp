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
//	// Ŀ�꣺�����������ֱ����
//	// ˼·��дһ����������㷨�������һ�����������ȡ�
//	int diameterOfBinaryTree(TreeNode* root) {
//		dfp(root);
//		return res - 1;
//	}
//
//	// �ڵ�Ϊ�շ���0��Ĭ�Ϸ������ҽڵ��е����ֵȻ����ϵ�ǰ�ڵ��1
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