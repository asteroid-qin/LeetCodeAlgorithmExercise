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
//    // Ŀ�꣺��һ��������ת��һ���ַ�����Ҫ����ǰ������ķ�ʽ��������Ҫʹ��һ������������ǰ�ڵ㣬�սڵ�Ϊ����
//    // ˼·���������ۣ��������뵱ǰ�ڵ㣬Ȼ���ж����ҽڵ��Ƿ񶼲�Ϊ�գ�����Ϊ�վ���Ҫ�����Ƿֱ��ã���������
//    // ���������Ϊ�գ���ô��Ҫ�ã������������������Ҳ�Ϊ�գ���Ҫ��ǰ���ȼ�һ�ԣ������ã������Ұ�����
//    // ��Ϊ�վ�û��Ҫ������...
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