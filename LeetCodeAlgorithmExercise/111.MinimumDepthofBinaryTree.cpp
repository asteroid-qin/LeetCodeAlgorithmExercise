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
//	// �������⣺����һ�����������������ȣ��ǲ��Ǿ��ú���Ϥ��104���������ȣ�
//	// ���ܣ���ȷʵ���ҵı�������Ҹ�ʱ��úò�ϰ��ϰ
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