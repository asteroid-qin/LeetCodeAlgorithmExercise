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
//};
//
//class Solution {
//public:
//    // 目标：输入一个特殊树的第二小节点值，没有就返回-1
//    // 思路：借助root.val = min(root.left.val, root.right.val)。也就是越往下一层，值会越来越大
//    // 涉及到层，推荐使用bfs。如果当前这一层没有root.val，那么返回这一层的最小值。不然需要遍历到元素结束
//    int findSecondMinimumValue(TreeNode* root) {
//        queue<TreeNode*> q;
//        q.push(root);
//
//        long m = LONG_MAX;
//        int size;
//        bool has;
//        while (!q.empty()) {
//            size = q.size();
//            has = false;
//            for (int i = 0; i < size; i++) {
//                TreeNode* node = q.front();
//                // 判断当前这一层是否有root->val
//                has = has ? has : (node->val == root->val);
//                // 计算出除root->val外的最小值
//                m = (node->val != root->val) ? min(m, 1L * node->val) : m;
//
//                if (node->left) {
//                    q.push(node->left);
//                    q.push(node->right);
//                }
//
//                q.pop();
//            }
//
//            if (!has) { // 如果当前这一层没有root->val,退出这个循环
//                break;
//            }
//        }
//
//        if (m != LONG_MAX) {
//            return m;
//        }
//
//        return -1;
//    }
//};
//
//int main() {
//	return 0;
//}