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
//    int sum = 0;
//
//    // Ŀ�꣺��������������ڡ�low��high�������ڵĽڵ�֮��
//    // ˼·���ݹ����һ�ζ������Ϳ��Եõ�������������Ƕ��������������Կ��Խ����Ż���
//    // �����ǰ�ڵ��ֵ����hight����ôֻ�ݹ��������
//    // �����ǰ�ڵ��ֵС��low����ôֻ�ݹ������ұ�
//    int rangeSumBST(TreeNode* root, int low, int high) {
//        if (!root) {
//            return 0;
//        }
//
//        if (root->val < low) {
//            return rangeSumBST(root->right, low, high);
//        }
//        else if (root->val > high) {
//            return rangeSumBST(root->left, low, high);
//        }
//
//        return root->val + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
//    }
//
//
//};
//
//int main() {
//	return 0;
//}