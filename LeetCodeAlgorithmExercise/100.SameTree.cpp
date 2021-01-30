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
////    // �������⣬�����Ծ����ж��������Ƿ���ȣ����ж����Ƿ���Ⱥ���������Ҫʹ�õݹ�
////    // һ�α��������һ��
////    bool isSameTree(TreeNode* p, TreeNode* q) {
////        // �����ǰΪnull���˳�
////        if (NULL == p) {
////            if (NULL == q) {
////                return true;
////            }
////            else {
////                return false;
////            }
////        }
////        // ��Ϊ�Ѿ�ִ��������Ĵ��룬����p�ǲ�Ϊnull��
////        if (NULL == q) {
////            return false;
////        }
////        // ��¼��ǰ��ֵ�Ƿ����
////        bool nowFlag = false;
////
////        // �ж�p��ֵ����q
////        if (p->val == q->val) {
////            nowFlag = true;
////        }
////
////        // ���������������Ƿ����
////        bool leftFlag = false, rightFlag = false;
////
////        // ʹ��ǰ�����
////        leftFlag = isSameTree(p->left, q->left);
////        rightFlag = isSameTree(p->right, q->right);
////
////
////        return nowFlag && leftFlag && rightFlag;
////    }
////};
//class Solution {
//public:
//    // �о�����Ĵ���д�Ĳ������ţ���Ҫ�޸�һ��
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//        if (NULL == p && NULL == q) {
//            // ����������Ϊnull
//            return true;
//        }
//        else if (NULL == p || NULL == q) {
//            // ����������һ��Ϊnull
//            return false;
//        }
//        else if (p->val != q->val) {
//            // �������������Ϊnull��Ҫ�ж�ֵ�Ƿ����
//            // �������ֱ���˳�
//            return false;
//        }
//        else{
//            // ����if��ͨ��������Ҫ�ж�p��q����ߺ��ұߣ�ʹ�õݹ飩
//            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//        }
//    }
//};
//
//// ���ԣ����ˣ�����̫�鷳�ˣ�һ����ֱ�ӹ�����
//int main() {
//
//	return 0;
//}