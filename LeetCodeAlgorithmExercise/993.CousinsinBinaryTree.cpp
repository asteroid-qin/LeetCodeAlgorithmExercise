//#include<iostream>
//#include<queue>
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
//
//};
//class Solution {
//public:
//    // 目标：判断x和y是否在root的同一层并且不是兄弟节点
//    // 思路：干就完事了！
//    bool isCousins(TreeNode* root, int x, int y) {
//        queue<TreeNode*> q;
//        q.push(root);
//
//        TreeNode* f1 = nullptr,* f2 = f1;
//
//        while(!q.empty()) {
//            int size = q.size();
//            
//            while (size--) {
//                TreeNode*  node = q.front();
//
//                for (auto c : { node->left, node->right }) {
//                    if (!c) continue;
//                    q.push(c);
//                    if (c->val == x) f1 = node;
//                    if (c->val == y) f2 = node;
//                }
//
//                q.pop();
//            }
//
//            if (f1 || f2) {
//                return f1 && f2 && f1 != f2;
//            }
//            
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}