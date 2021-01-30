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
//	// 要求：给一个二叉树，自低向上把每层分别放入一个vector中，最后准备一个大vector，把所有的放入并返回
//	// 涉及到二叉树分层，那必须使用到队列（因为涉及频繁的插入）
//	vector<vector<int>> levelOrderBottom(TreeNode* root) {
//		// 初始化一个容器
//		vector<vector<int>> myVector;
//
//		// 先判断root是不是null
//		if (!root) {
//			return myVector;
//		}
//
//		// 继续处理，需要准备一个队列来取出树里面每一层的数据
//		deque<TreeNode*> myDeque;
//		// 把root放入
//		myDeque.push_back(root);
//
//		// 开始遍历
//		while (!myDeque.empty()) {
//			// 先准备一个vector容器
//			vector<int> v;
//			// 拿到队列中的元素个数，这也意味着需要遍历多少次
//			int size = myDeque.size();
//
//			for (int i = 0; i < size; i++) {
//				// 取出第一个元素
//				TreeNode* now = myDeque.front();
//				myDeque.pop_front();
//
//				// 把当前的值放入v中
//				v.push_back(now->val);
//
//
//				// 先把当前取出的元素的左值和右值放入队列中(注意要判断是否为空)
//				// 这是把下一层的节点放入队列中
//				if (now->left) {
//					myDeque.push_back(now->left);
//				}
//				if (now->right) {
//					myDeque.push_back(now->right);
//				}
//			}
//
//			// 把v中的数据全部放入大vector容器中
//			myVector.push_back(v);
//
//		}
//		// 根据题意需要反转
//		reverse(myVector.begin(), myVector.end());
//		return myVector;
//	}
//};
//
//
//
//// 依旧是树...
//int main() {
//
//
//	return 0;
//}