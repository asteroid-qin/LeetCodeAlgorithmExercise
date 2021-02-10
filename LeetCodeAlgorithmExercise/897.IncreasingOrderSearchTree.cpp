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
//    queue<TreeNode*> q;
//    // 目标：中序遍历让最左边的节点作为根结点，并且每一个节点都没有左节点，只有一个树节点
//    // 思路：中序遍历必定会最终会调用到最左边节点，使用一个变量接受中序遍历的结果，然后循环设置右节点最后返回即可
//    // 好慢啊，还是得直接在递归时更改树的结构！！
//    // 思路：对于当前节点，得让自己的左节点为null，并将当前节点设为上一个节点的右节点
//	  // 如果使用哨兵节点，结果都放在哨兵的右节点，这样就不用考虑null情况，可以写的更加简洁
//    TreeNode* increasingBST(TreeNode* root) {
//        dfs(root);
//
//        TreeNode* head = new TreeNode();
//        TreeNode* pre = head;
//
//        while (!q.empty()) {
//            pre->right = q.front();
//            pre = pre->right;
//            q.pop();
//        }
//
//        return head->right;
//    }
//
//    void dfs(TreeNode* root) {
//        if (!root) {
//            return;
//        }
//
//        dfs(root->left);
//        root->left = nullptr;
//        q.emplace(root);
//        dfs(root->right);
//    }
//
//
//    TreeNode* now = nullptr;
//    
//    // 重新编写！
//    TreeNode* increasingBSTP(TreeNode* root) {
//        TreeNode* ans = new TreeNode();
//        now = ans;
//
//        dfs(root);
//
//
//        return ans->right;
//    }
//
//    void dfsP(TreeNode* root) {
//        if (!root) {
//            return;
//        }
//        
//        dfs(root->left);
//
//        root->left = nullptr;
//        now->right = root;
//        now = now->right;
//
//        dfs(root->right);
//    }
//};
//
//int main() {
//	return 0;
//}