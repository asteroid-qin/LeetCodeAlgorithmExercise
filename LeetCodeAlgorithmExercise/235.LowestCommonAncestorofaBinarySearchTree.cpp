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
//    // ֮ǰ��ȫû��������������...
//    // ��һ���뵽�ľ��Ƿ���1������̫�鷳�ˣ����Ի�������..
//    // ���Ƿ��������Ӽ������~~
//    // Ŀ�꣺��һ������ƽ�����������ڵ㣬Ҫ���ҵ������ڵ��������ڸ��ڵ�
//    // ˼·�����ö���ƽ���������ʣ��ȵ�ǰ�����С������ߣ��ȵ�ǰ���ڵ������ұߣ�
//    // ����������������ֲ�·����p����q�ǵ�ǰroot������ֻҪ�������root����    
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        TreeNode* ancestor = root;
//
//        while (true) {
//            // ���ȵ�ǰС����Ҫ������ƶ�
//            if (ancestor->val > p->val && ancestor->val > q->val) {
//                ancestor = ancestor->left;
//            }
//            else if (ancestor->val < p->val && ancestor->val < q->val) {
//                // ���ȵ�ǰ����Ҫ���ұ���
//                ancestor = ancestor->right;
//            }
//            else {
//                // �����ֲ�ڣ�ֱ���˳�ѭ�������ص�ǰ��root����
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