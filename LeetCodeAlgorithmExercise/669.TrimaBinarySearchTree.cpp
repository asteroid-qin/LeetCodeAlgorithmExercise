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
//    // 目标：修剪二叉搜索树.其实就是输入最大值和最小值，如果当前节点的值不满足这个关系，则需要过滤当前节点
//    // 思路：前序遍历，如果当前节点的左右节点不为空，判断他们的值是否在low和high之间
//    TreeNode* trimBST(TreeNode* root, int low, int high) {
//        // dfs只处理当前节点的左右节点，如果low和hight过滤的root，那需要特殊处理
//        dfs(root, low, high);
//        return root;
//    }
//
//    // 这道题实在是太狠了..需要写一个递归，对当前节点进行修剪（必须传引用！）
//    // 关键问题是如何修剪，得利用到BST的性质，写一个while循环，如果当前值在low和high内就退出，不然就
//    // 判断当前这个值是大于high还是小于low，大于high需要当前root=root->left,小于low则需要root=root->right
//    // 一直持续这个循环，直到当前root为null或者当前值在low和high之间。然后使用递归分别处理当前节点的左右节点。
//    void dfs(TreeNode*& root, int& low, int& high) {
//        while(root) {
//            if (root->val >= low && root->val <= high) {
//                break;
//            }
//
//            if (root->val > high) {
//                root = root->left;
//            }
//            else if (root->val < low) {
//                root = root->right;
//            }
//        }
//
//        if (!root) {
//            return;
//        }
//        
//        dfs(root->left, low, high);
//        dfs(root->right, low, high);
//    }
//
//    // 再写一个递归，这次有返回值！！
//    TreeNode* trimBSTP(TreeNode* root, int low, int high) {
//        if (!root) {
//            return root;
//        }
//        if (root->val > high) {
//            return trimBSTP(root->left, low, high);
//        }
//        if (root->val < low) {
//            return trimBSTP(root->right, low, high);
//        }
//
//        root->left = trimBSTP(root->left, low, high);
//        root->right = trimBSTP(root->right, low, high);
//
//        return root;
//    }
//};
//
//int main() {
//	return 0;
//}