//#include<iostream>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//public:
//    // Ŀ�꣺�жϵ�ǰ����ÿ���ڵ��Ƿ����
//    // ˼·���ݹ鼴��...
//    // ���������Ż�����Ϊ��Ŀ��������˵��root�϶���Ϊ�գ����Դ�����Խ�һ���Ż�
//    bool isUnivalTree(TreeNode* root) {
//        if (!root) {
//            return true;
//        }
//
//        if ((root->left && root->left->val != root->val) ||
//            (root->right && root->right->val != root->val)) {
//            return false;
//        }
//
//        return isUnivalTree(root->left) && isUnivalTree(root->right);
//    }
//
//    // �Ż��ǿ��жϣ�����������ʵû����٣�
//    bool isUnivalTreeP(TreeNode* root) {
//        bool l = (!root->left || (root->val == root->left->val && isUnivalTreeP(root->left)));
//        bool r = (!root->right || (root->val == root->right->val && isUnivalTreeP(root->right)));
//
//        return l && r;
//    }
//};
//
//int main() {
//	return 0;
//}