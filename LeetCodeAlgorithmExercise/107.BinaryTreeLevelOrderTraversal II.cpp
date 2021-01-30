//#include<iostream>
//#include<vector>
//#include<deque>
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
//	// Ҫ�󣺸�һ�����������Ե����ϰ�ÿ��ֱ����һ��vector�У����׼��һ����vector�������еķ��벢����
//	// �漰���������ֲ㣬�Ǳ���ʹ�õ����У���Ϊ�漰Ƶ���Ĳ��룩
//	vector<vector<int>> levelOrderBottom(TreeNode* root) {
//		// ��ʼ��һ������
//		vector<vector<int>> myVector;
//
//		// ���ж�root�ǲ���null
//		if (!root) {
//			return myVector;
//		}
//
//		// ����������Ҫ׼��һ��������ȡ��������ÿһ�������
//		deque<TreeNode*> myDeque;
//		// ��root����
//		myDeque.push_back(root);
//
//		// ��ʼ����
//		while (!myDeque.empty()) {
//			// ��׼��һ��vector����
//			vector<int> v;
//			// �õ������е�Ԫ�ظ�������Ҳ��ζ����Ҫ�������ٴ�
//			int size = myDeque.size();
//
//			for (int i = 0; i < size; i++) {
//				// ȡ����һ��Ԫ��
//				TreeNode* now = myDeque.front();
//				myDeque.pop_front();
//
//				// �ѵ�ǰ��ֵ����v��
//				v.push_back(now->val);
//
//
//				// �Ȱѵ�ǰȡ����Ԫ�ص���ֵ����ֵ���������(ע��Ҫ�ж��Ƿ�Ϊ��)
//				// ���ǰ���һ��Ľڵ���������
//				if (now->left) {
//					myDeque.push_back(now->left);
//				}
//				if (now->right) {
//					myDeque.push_back(now->right);
//				}
//			}
//
//			// ��v�е�����ȫ�������vector������
//			myVector.push_back(v);
//
//		}
//		// ����������Ҫ��ת
//		reverse(myVector.begin(), myVector.end());
//		return myVector;
//	}
//};
//
//
//
//// ��������...
//int main() {
//
//
//	return 0;
//}