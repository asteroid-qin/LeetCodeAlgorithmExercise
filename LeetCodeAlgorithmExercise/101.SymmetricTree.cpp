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
//    // ��������⣺��Ҫд��һ���㷨�ж�һ�����Ƿ��ǶԳƵ���
//    // ����������ж�һ�����ǶԳƵģ�
//    // ���ȣ�����һ������Ϊ2�Ķ���������Ҫ��ǰ�ڵ���Բ���Ϊ�գ�Ȼ���ж��������ҽڵ�
//    // ������������ҽڵ㶼Ϊ����ô������ȵ�
//    // ����������ҽڵ���һ����Ϊ�գ���ô���ǲ���ȵģ�����������ҽڵ����ҵ�ֵ����ȵģ���ô������ȵ�
//    // �����ڶ��Ķ�������Ϊ�˶Գ�����Ҫ�������ڵ㣬�������һ���ڵ����ֵ���ڵڶ����ڵ����ֵ��
//    // ��һ���ڵ����ֵ���ڵڶ����ڵ����ֵ������ͨ���ݹ�Ϳ��Խ�����������
//    // ���Ǻ����ԣ���Ҫ�����ڵ���ܽ�����⣬���Ե��Լ�дһ���ݹ鷽��
//    bool isSymmetric(TreeNode* root) {
//        return isMirror(root, root);
//    }
//
//    // ����һ�£�������û���ʹ��ָ�봫�Ρ�
//    bool isMirror(TreeNode* n1, TreeNode* n2) {
//        if (NULL == n1 && NULL == n2) {
//            // ������ҽڵ㶼Ϊnull����Ҳ��ƽ��
//            return true;
//        }
//        else if (NULL == n1 || NULL == n2) {
//            // ���������һ���ڵ���null������ƽ��
//            return false;
//        }
//        else if (n1->val != n2->val) {
//            // ����ǰ����жϣ�n1��n2���Բ�Ϊnull�����Կ���ȡ���ǵ�ֵ�ų�����ȵĲ���
//            return false;
//        }
//        else {
//            // ��ؼ��Ĳ��֣�ǰ��Ķ��ж���󣬵�ǰn1��n2��ֵ�϶�����ȵ�
//            // ������Ҫʹ�õݹ��ж�n1����ڵ��Ƿ����n2���ҽڵ㣬n1���ҽڵ��Ƿ����n2����ڵ�
//            // ���ѽ�����ؼ���
//            return isMirror(n1->left, n2->right) && isMirror(n1->right, n2->left);
//        }
//
//    }
//};
//
//// ����...���Ļ������ò�����
//// һ���Ӿͽ����ˣ��Ͼ��ǵݹ�
//int main() {
//
//
//	return 0;
//}