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
//    // Ŀ�꣺��ת������
//    // ˼·��ʹ�õݹ飡����������������Ӧ���뵽�ݹ飩
//    TreeNode* invertTree(TreeNode* root) {
//        // ������ֻ�������ڵ�Ķ�����
//        // ��Ҫ������ת���͵ð�������߻����ұ�
//        if (!root) {
//            return nullptr;
//        }
//
//        // ����
//        /*
//            �ѽ����򵥵������������Ҫ����������ݹ�����
//            �����ԣ��ڸ�ֵǰ������ڵ㷴ת���ҽڵ㷴ת�������ò�����
//        */
//        root->left = invertTree(root->left);
//        root->right = invertTree(root->right);
//
//        TreeNode* temp = root->left;
//        root->left = root->right;
//        root->right = temp;
//
//        // ��ˣ���ת��ϣ���󷵻ض�����
//        return root;
//    }
//};
//
//int main() {
//	return 0;
//}