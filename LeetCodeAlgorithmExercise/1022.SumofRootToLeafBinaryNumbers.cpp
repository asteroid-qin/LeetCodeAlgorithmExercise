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
//    // Ŀ�꣺��Ӹ���Ҷ�Ķ�������֮��
//    // ˼·����һ��������Ϊ��ʼֵ��ÿ�εݹ�ʱ������1λ�������Ҷ�ӽڵ㣬�����ֵ����sum���ɡ���󷵻����sum
//    int sumRootToLeaf(TreeNode* root) {
//        dfs(root, 0);
//        return sum;
//    }
//    
//
//    void dfs(TreeNode* root, int num) {
//        if (!root) {
//            return;
//        }
//
//        num += root->val;
//
//        if (!root->left && !root->right) { // Ҷ�ӽڵ�
//            sum += num;
//            return;
//        }
//
//        dfs(root->left, num << 1);
//        dfs(root->right, num << 1);
//    }
//};
//
//int main() {
//	return 0;
//}