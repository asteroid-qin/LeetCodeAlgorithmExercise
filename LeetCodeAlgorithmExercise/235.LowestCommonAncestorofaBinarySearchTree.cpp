//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    // 之前完全没有碰到过的问题...
//    // 第一个想到的就是方法1，不过太麻烦了，所以还是算了..
//    // 还是方法二更加简洁美丽~~
//    // 目标：给一个二叉平衡树和两个节点，要求找到两个节点的最短相邻父节点
//    // 思路：利用二叉平衡树的性质，比当前根结点小就在左边，比当前根节点大就在右边，
//    // 其他情况就是遇到分叉路或者p或者q是当前root，所以只要返回这个root即可    
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        TreeNode* ancestor = root;
//
//        while (true) {
//            // 都比当前小，需要往左边移动
//            if (ancestor->val > p->val && ancestor->val > q->val) {
//                ancestor = ancestor->left;
//            }
//            else if (ancestor->val < p->val && ancestor->val < q->val) {
//                // 都比当前大，需要往右边移
//                ancestor = ancestor->right;
//            }
//            else {
//                // 遇到分叉口，直接退出循环，返回当前的root即可
//                break;
//            }
//        }
//
//        return ancestor;
//    }
//};
//
//int main() {
//	return 0;
//}