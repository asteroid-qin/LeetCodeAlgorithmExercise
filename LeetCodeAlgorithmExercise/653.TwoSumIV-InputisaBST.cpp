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
//    // Ŀ�꣺�ڶ�����������������֮��
//    // ˼·����Ȼ��Ҫʹ��map������ԭ��˼·ǰ��
//    // ע�⣡�����Ƕ��������������Կ�����������������
//    bool findTarget(TreeNode* root, int k) {
//        unordered_set<int> set;
//        bool flag = false;
//
//        dfs(root , k, set, flag);
//
//        return flag;
//    }
//
//    // ֱ��ʹ��dfsȥ����������..
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
//    // ����ʹ��bfs�������...
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