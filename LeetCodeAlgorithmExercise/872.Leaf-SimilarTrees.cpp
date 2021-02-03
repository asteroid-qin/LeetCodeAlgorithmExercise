//#include<iostream>
//#include<queue>
//#include<vector>
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
//    // Ŀ�꣺�ж���������Ҷ�ڵ������Ƿ�����
//    // ˼·������õ���������Ҷ�ӽڵ㣬��һ��whileѭ���ȶԼ���
//    // �������ڴ�Žڵ����е�����Ϊqueue
//    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
//        queue<int> q1;
//        queue<int> q2;
//
//        dfs(root1, q1);
//        dfs(root2, q2);
//
//        if (q1.size() != q2.size()) {
//            return false;
//        }
//
//        for (; !q1.empty(); q1.pop(), q2.pop()) {
//            if (q1.front() != q2.front()) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//    void dfs(TreeNode* root, queue<int>& q) {
//        if (!root) {
//            return;
//        }
//
//        if (!root->left && !root->right) {
//            q.emplace(root->val);
//        }
//
//        dfs(root->left, q);
//        dfs(root->right, q);
//    }
//
//};
//
//int main() {
//	return 0;
//}