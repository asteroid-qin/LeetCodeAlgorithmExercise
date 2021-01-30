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
//    // Ŀ�꣺�ж�t���Ƿ���s������
//    // ˼·�����õݹ��ҵ�s��tƥ���ͷ��㣬Ȼ��ʼ�������
//    bool isSubtree(TreeNode* s, TreeNode* t) {
//        return dfs(s, t);
//    }
//
//    // ʹ���������Ѱ�ҵ�ǰ�ڵ�
//    bool dfs(TreeNode* s, TreeNode* t) {
//        if (!s) {
//            return false;
//        }
//
//        return check(s, t) || dfs(s->left, t) || dfs(s->right, t);
//    }
//    
//    // ��һ����ͬ�ڵ㿪ʼ���
//    bool check(TreeNode* s, TreeNode* t) {
//        if (!s && !t) {
//            return true;
//        }
//        else if ((!s || !t) || s->val != t->val) {
//            return false;
//        }
//
//        // ��ʼ�Ƚ����ҽڵ㣨ֻҪ������һ����ͬ����Ҫ����false��
//        return check(s->left, t->left) && check(s->right, t->right);
//    }
//
//
//};
//
//int main() {
//	return 0;
//}