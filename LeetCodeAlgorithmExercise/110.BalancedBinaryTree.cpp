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
//	// �����ԣ�����������Ҫ�ж�һ��һ�����Ƿ��Ƕ���ƽ����
//	// ���Է���Ϊ�ж�һ���ڵ����ڵ�ĸ߶ȼ�ȥ�ҽڵ�ĸ߶ȵľ���ֵ�Ƿ�С�ڵ���1
//	bool isBalanced(TreeNode* root) {
//		// ֱ�ӵ�������ĵݹ鷽��������Ϊʲô��0Ҳ�е���գ�
//		return getHeight(root) >= 0;
//	}
//
//	// ��Ҫ����һ����������Ϊ���ܸ߶���Ҫʹ��int
//	int getHeight(TreeNode* root) {
//		// ��ȥ������ǰ�ڵ�Ϊ�յ������
//		// ���ߵ�ǰ�ڵ�Ϊ����µĽڵ㣬�߶���Ҫ��0��ʼ����
//		if (NULL == root) {
//			return 0;
//		}
//
//		// �ݹ��õ���������ұ����ĸ߶�
//		int leftHeight = getHeight(root->left);
//		int rightHeight = getHeight(root->right);
//
//		// �޷�ƽ�������
//		if (leftHeight == -1 || rightHeight == -1 || abs(leftHeight - rightHeight) > 1) {
//			return -1;
//		}
//		else {
//			// ��Ȼ�Ļ�����Ҫ�Ѹ߶ȸ�������
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