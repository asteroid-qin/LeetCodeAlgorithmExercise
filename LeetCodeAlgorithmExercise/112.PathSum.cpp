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
//	// ���ǽ���������⣺
//	// �õ�һ�����֣���Ҫ�Ӹ���㿪ʼ���±��������ǡ��ÿ�������ڵ��ֵ����������Ҫ�ҵ�ֵ�ͷ���true
//	// ����򵥵�ģ�����Ƹ��ӵ����
//	// ���ź���û��һ�ι�����Ϊ���⣺��Ҫһֱ�㵽Ҷ�ڵ��ϵ�����·��������ȷ�ģ�
//	// �ðɣ������뵱Ȼ�ˡ���Ϊ���ܴ��ڸ�ֵ�����Բ���Ҫ�жϵ�ǰֵ�Ĵ���С�ڣ�ֻ��Ҫ�жϵ���
//	bool hasPathSum(TreeNode* root, int sum) {
//		// ��ǰ�ڵ�ΪnullӦ�þ���Ҫ�˳�
//		if (root == NULL) {
//			return false;
//		}
//		// �����ǰ�ڵ��Ǹ��ڵ�
//		if (root->left == NULL && root->right == NULL) {
//			return sum == root->val;
//		}
//
//		// ��ʼ�ݹ�
//		return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);		
//	}
//};
//
//int main() {
//	// ����һ���Լ�д�ģ���Ȼ�е��ʲݣ����Ǹо�������û�������
//	Solution s;
//	TreeNode* n1 = new TreeNode(-2);
//	TreeNode* n2 = new TreeNode(-3);
//	n1->right = n2;
//
//	// ��ʼ����
//	bool isExited = s.hasPathSum(n1, -5);
//
//	if (isExited) {
//		cout << "���ڣ���" << endl;
//	}
//	else {
//
//		cout << "�����ڣ���" << endl;
//	}
//
//	return 0;
//}