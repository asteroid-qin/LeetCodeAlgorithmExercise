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
//    // Ŀ�꣺����һ��������Ҷ����֮��
//    // ˼·������ж�һ������Ҷ���������ҽڵ�Ϊnull������ж�����������������ӵ�ǰ�ڵ�����
//    int sumOfLeftLeaves(TreeNode* root) {
//        return root ? dfs(root) : 0;
//    }
//
//    // �������if������ζ�ų��˳�ʼrootΪnull�⣬�ݹ���þ��Բ��ᴫ��null
//    int dfs(TreeNode* root) {
//        // ��¼��Ҷ�����ڵ�ĺ�
//        int sum = 0;
//
//        if (root->left) {
//            // �����߲�Ϊ�գ�������ߵ�Ҷ����֮��
//            sum = isLeafNode(root->left) ? root->left->val : sumOfLeftLeaves(root->left);
//        }
//
//        if (root->right && !isLeafNode(root->right)) {
//            sum += sumOfLeftLeaves(root->right);
//        }
//
//        return sum;
//    }
//
//    bool isLeafNode(TreeNode* node) {
//        return !node->left && !node->right;
//    }
//};
//
//int main() {
//	return 0;
//}