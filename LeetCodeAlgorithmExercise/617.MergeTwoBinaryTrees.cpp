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
//    // Ŀ�꣺�ϲ�������
//    // ˼·����t2��t1����ϳɣ������ǰt2��null���˳������Ǿ����õ�ǰt1��ֵ+=t2��ֵ
//    // Ȼ���ж����ҽڵ㣬���t2��Ϊ�ղ������ҽڵ�Ϊ�գ���ô��ô����ǰ�ڵ����ÿյ����ҽڵ�
//    // ��������ݹ飬һ�������һ�����ұ�
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