//#include<iostream>
//using namespace std;
//
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
////class Solution {
////public:
////    // 根据题意，很明显就是判断两棵树是否相等，而判断树是否相等很明显是需要使用递归
////    // 一次编译过，下一题
////    bool isSameTree(TreeNode* p, TreeNode* q) {
////        // 如果当前为null就退出
////        if (NULL == p) {
////            if (NULL == q) {
////                return true;
////            }
////            else {
////                return false;
////            }
////        }
////        // 因为已经执行完上面的代码，所以p是不为null的
////        if (NULL == q) {
////            return false;
////        }
////        // 记录当前的值是否相等
////        bool nowFlag = false;
////
////        // 判断p的值等于q
////        if (p->val == q->val) {
////            nowFlag = true;
////        }
////
////        // 用两个变量接受是否相等
////        bool leftFlag = false, rightFlag = false;
////
////        // 使用前序遍历
////        leftFlag = isSameTree(p->left, q->left);
////        rightFlag = isSameTree(p->right, q->right);
////
////
////        return nowFlag && leftFlag && rightFlag;
////    }
////};
//class Solution {
//public:
//    // 感觉上面的代码写的不够优雅，需要修改一下
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//        if (NULL == p && NULL == q) {
//            // 这是两个都为null
//            return true;
//        }
//        else if (NULL == p || NULL == q) {
//            // 这是其中有一个为null
//            return false;
//        }
//        else if (p->val != q->val) {
//            // 这个是两个都不为null需要判断值是否相等
//            // 不相等则直接退出
//            return false;
//        }
//        else{
//            // 上面if都通过后，则需要判断p和q的左边和右边（使用递归）
//            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//        }
//    }
//};
//
//// 测试，算了，做树太麻烦了，一口气直接过算了
//int main() {
//
//	return 0;
//}