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
//    // 目标：判断t树是否是s的子树
//    // 思路：先用递归找到s和t匹配的头结点，然后开始真正检查
//    bool isSubtree(TreeNode* s, TreeNode* t) {
//        return dfs(s, t);
//    }
//
//    // 使用深度优先寻找当前节点
//    bool dfs(TreeNode* s, TreeNode* t) {
//        if (!s) {
//            return false;
//        }
//
//        return check(s, t) || dfs(s->left, t) || dfs(s->right, t);
//    }
//    
//    // 从一个相同节点开始检查
//    bool check(TreeNode* s, TreeNode* t) {
//        if (!s && !t) {
//            return true;
//        }
//        else if ((!s || !t) || s->val != t->val) {
//            return false;
//        }
//
//        // 开始比较左右节点（只要其中有一个不同就需要返回false）
//        return check(s->left, t->left) && check(s->right, t->right);
//    }
//
//
//};
//
//int main() {
//	return 0;
//}