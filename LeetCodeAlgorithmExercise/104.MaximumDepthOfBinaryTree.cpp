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
//    // Ҫ���õ�һ��������������Ϊ�գ����ж����Ĳ���
//    // Ŀǰ���뷨�ǣ��ݹ�������������Ҫ�½�һ����������һ�����ֵ�Ĳ���
//    // ���ˣ�ֱ�ӿ�LeetCode������
//    // �������֪�������������������������� ll �� rr����ô�ö������������ȼ�Ϊ
//    // max(l, r) + 1
//    // ���������ʽ�Ϳ�������д���ݹ�
//    int maxDepth(TreeNode* root) {
//        // ����������һ����������Ҫ����0
//        if (NULL == root) {
//            return 0;
//        }
//
//        // �ⲽʵ����̫����
//        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//    }
//};
//
//// ���������⣬���Ի��ǲ�������
//int main() {
//
//
//	return 0;
//}