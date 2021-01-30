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
//    // 目标：合并两颗树
//    // 思路：把t2往t1上面合成，如果当前t2是null就退出，不是就设置当前t1的值+=t2的值
//    // 然后判断左右节点，如果t2不为空并且左右节点为空，那么那么给当前节点设置空的左右节点
//    // 最后两个递归，一个往左边一个往右边
//    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
//        if (t1) {
//            dfs(t1, t2);
//
//            return t1;
//        }
//
//        return t2;
//    }
//
//    void dfs(TreeNode* t1, TreeNode* t2) {
//        if (!t2) {
//            return;
//        }
//        t1->val += t2->val;
//        if (!t1->left && t2->left) {
//            t1->left = new TreeNode();
//        }
//        if (!t1->right && t2->right) {
//            t1->right = new TreeNode();
//        }
//
//        dfs(t1->left, t2->left);
//        dfs(t1->right, t2->right);
//    }
//};
//
//int main() {
//    return 0;
//}