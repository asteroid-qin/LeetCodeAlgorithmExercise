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
//class MyInt {
//public:
//    int val;
//    int size;
//
//    void push(int val) {
//        this->val = val;
//        size++;
//    }
//};
//
//class Solution {
//public:
//
//
//    int res = INT_MAX;
//    // ���������long������ʹ��vector���⣬Ҳ�����Լ�дһ����װ����
//    MyInt pre;
//    
//    // Ŀ�꣺��BST���������ڵ�Ĳ����Сֵ��
//    // ˼·������BST���������ʣ����԰��������ת����������Ĳ���Сֵ�����⡣
//    // ��Ҫ�ر�ע����ǣ���Ҫ�ñ�����¼��һ������ֵ����ΪҪ���˵���һ�Σ����Կ����Լ���װһ��int
//    int minDiffInBST(TreeNode* root) {
//        dfs(root);
//        return res;
//    }
//
//    void dfs(TreeNode* root) {
//        if (!root) {
//            return;
//        }
//
//        dfs(root->left);
//
//        if (pre.size != 0) {
//            res = min(res, root->val - pre.val);
//            pre.val = root->val;
//        }
//        else {
//            pre.push(root->val);
//        }
//
//        dfs(root->right);
//    }
//};
//
//int main() {
//	return 0;
//}