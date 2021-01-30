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
//};
//
//class Solution {
//public:
//    // 想理解题意：需要写出一个算法判断一个树是否是对称的树
//    // 问题是如何判断一个树是对称的？
//    // 首先，对于一个层数为2的二叉树，需要当前节点绝对不能为空，然后判断他的左右节点
//    // ，如果他的左右节点都为空那么就是相等的
//    // 如果他的左右节点有一个不为空，那么就是不相等的，如果他的左右节点左右的值是相等的，那么就是相等的
//    // 而对于多层的二叉树，为了对称则需要有两个节点，并满足第一个节点的左值等于第二个节点的右值，
//    // 第一个节点的右值等于第二个节点的左值，这样通过递归就可以解决这个问题了
//    // 但是很明显，需要两个节点才能解决问题，所以得自己写一个递归方法
//    bool isSymmetric(TreeNode* root) {
//        return isMirror(root, root);
//    }
//
//    // 补充一下，这里最好还是使用指针传参。
//    bool isMirror(TreeNode* n1, TreeNode* n2) {
//        if (NULL == n1 && NULL == n2) {
//            // 如果左右节点都为null，则也算平衡
//            return true;
//        }
//        else if (NULL == n1 || NULL == n2) {
//            // 如果其中有一个节点是null，则不算平衡
//            return false;
//        }
//        else if (n1->val != n2->val) {
//            // 经过前面的判断，n1和n2绝对不为null，所以可以取他们的值排除不相等的部分
//            return false;
//        }
//        else {
//            // 最关键的部分，前面的都判断完后，当前n1和n2的值肯定是相等的
//            // 所以需要使用递归判断n1的左节点是否等于n2的右节点，n1的右节点是否等于n2的左节点
//            // 最后把结果返回即可
//            return isMirror(n1->left, n2->right) && isMirror(n1->right, n2->left);
//        }
//
//    }
//};
//
//// 测试...树的话就懒得测试了
//// 一下子就结束了，毕竟是递归
//int main() {
//
//
//	return 0;
//}