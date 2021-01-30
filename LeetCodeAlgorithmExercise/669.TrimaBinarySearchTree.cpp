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
//    // Ŀ�꣺�޼�����������.��ʵ�����������ֵ����Сֵ�������ǰ�ڵ��ֵ�����������ϵ������Ҫ���˵�ǰ�ڵ�
//    // ˼·��ǰ������������ǰ�ڵ�����ҽڵ㲻Ϊ�գ��ж����ǵ�ֵ�Ƿ���low��high֮��
//    TreeNode* trimBST(TreeNode* root, int low, int high) {
//        // dfsֻ����ǰ�ڵ�����ҽڵ㣬���low��hight���˵�root������Ҫ���⴦��
//        dfs(root, low, high);
//        return root;
//    }
//
//    // �����ʵ����̫����..��Ҫдһ���ݹ飬�Ե�ǰ�ڵ�����޼������봫���ã���
//    // �ؼ�����������޼��������õ�BST�����ʣ�дһ��whileѭ���������ǰֵ��low��high�ھ��˳�����Ȼ��
//    // �жϵ�ǰ���ֵ�Ǵ���high����С��low������high��Ҫ��ǰroot=root->left,С��low����Ҫroot=root->right
//    // һֱ�������ѭ����ֱ����ǰrootΪnull���ߵ�ǰֵ��low��high֮�䡣Ȼ��ʹ�õݹ�ֱ���ǰ�ڵ�����ҽڵ㡣
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
//    // ��дһ���ݹ飬����з���ֵ����
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