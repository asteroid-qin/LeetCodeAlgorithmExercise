//#include<iostream>
//#include<string>
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
//    // 目标：将一个二叉树转成一个字符串。要求按照前序遍历的方式，并且需要使用一个（）包裹当前节点，空节点为（）
//    // 思路：分类讨论，首先输入当前节点，然后判断左右节点是否都不为空，都不为空就需要把他们分别用（）包起来
//    // 否则，如果左不为空，那么需要用（）把左包起来，如果右不为空，需要在前面先加一对（）再用（）把右包起来
//    // 都为空就没必要处理了...
//    string tree2str(TreeNode* t) {
//        string res;
//
//        if (t) {
//            dfs(t, res);
//        }
//
//        return res;
//    }
//
//    void dfs(TreeNode* root, string& res) {
//        res += to_string(root->val);
//
//        if (root->left && root->right) {
//            res += "(";
//            dfs(root->left, res);
//            res += ")(";
//            dfs(root->right, res);
//            res += ")";
//        }
//        else if (root->left) {
//            res += "(";
//            dfs(root->left, res);
//            res += ")";
//        }
//        else if (root->right) {
//			  res += "()(";
//            dfs(root->right, res);
//            res += ")";
//        }
//
//    }
//};
//
//int main() {
//	return 0;
//}