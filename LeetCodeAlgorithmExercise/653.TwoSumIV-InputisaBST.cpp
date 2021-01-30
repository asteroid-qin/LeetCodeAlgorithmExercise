//#include<iostream>
//#include<unordered_set>
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
//    // 目标：在二叉搜索树上求两数之和
//    // 思路：依然需要使用map，按照原有思路前进
//    // 注意！这里是二叉搜索树，所以可以用其他方法来找
//    bool findTarget(TreeNode* root, int k) {
//        unordered_set<int> set;
//        bool flag = false;
//
//        dfs(root , k, set, flag);
//
//        return flag;
//    }
//
//    // 直接使用dfs去解决这个问题..
//    void dfs(TreeNode* root,int k, unordered_set<int>& set, bool& flag) {
//        if (!root || flag) {
//            return;
//        }
//
//        if (set.count(k - root->val)) {
//            flag = true;
//            return;
//        }
//        set.insert(root->val);
//
//        dfs(root->left, k, set, flag);
//        dfs(root->right, k, set, flag);
//    }
//
//    // 这里使用bfs解决问题...
//    bool findTargetB(TreeNode* root, int k) {
//        queue<TreeNode*> q;
//        unordered_set<int> set;
//        q.push(root);
//
//        while (!q.empty()) {
//            if (q.front()) {
//                TreeNode* node = q.front();
//                q.pop();
//                if (set.count(k - node->val)) {
//                    return true;
//                }
//                set.emplace(node->val);
//                q.emplace(node->left);
//                q.emplace(node->right);
//            }
//            else {
//                q.pop();
//            }
//        }
//
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}