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
//    int sum;
//
//    // Ŀ�꣺���һ�����¶ȡ��¶ȶ��弴Ϊ���ýڵ��������Ľڵ�֮�ͺ��������ڵ�֮�͵� ��ľ���ֵ
//    // ������ ���¶Ⱦ��������нڵ���¶�֮�͡�
//    // ˼·��дһ���ݹ�������������������Ľڵ�֮��.����һ��ȫ�ֱ�����¼�¶�
//    int findTilt(TreeNode* root) {
//        dfp(root);
//        return sum;
//    }
//
//    // ���ڼ���һ���ڵ�֮��
//    int dfp(TreeNode* root) {
//        if (!root) {
//            return 0;
//        }
//
//        // �������ҽڵ�Ľڵ���
//        int left = dfp(root->left);
//        int right = dfp(root->right);
//
//        // �ڼ���ڵ�����ͬʱ����¼�¶�
//        sum += abs(left - right);
//
//        // ���ص�ǰ�ڵ���
//        return left + right + root->val;
//    }
//};
//
//int main() {
//	return 0;
//}