//#include<iostream>
//#include<vector>
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
//    // ����֪�⣬Ŀ�꣺��root��·��ȫ����ŵ�vector�в�����
//    // ˼·����ƶ���������Ӧ���뵽�ݹ飡����Ҫʹ��string��¼ÿ�����µݹ�ʱ��·�������ݹ鵽Ҷ�ӽڵ��ʱ��Ϳ���return��
//    vector<string> binaryTreePaths(TreeNode* root) {
//        // ����һ������
//        vector<string> v;
//
//        getBinaryTreePaths(v, root, "");
//
//        return v;
//    }
//
//    // ʹ��
//    void getBinaryTreePaths(vector<string>& v, TreeNode* root, string path) {
//        // �ų��������
//        if (!root) {
//            return;
//        }
//
//        // �����ǰ�ڵ㲻Ϊ�յĻ��ѵ�ǰ�ڵ��ֵ����path��
//        // ע���ʱ��Ҫ���зǿ��жϣ��ðɣ����԰�����Ҷ�ӽڵ�������һ��
//        if (path != "") {
//            path += "->";
//        }
//        path += to_string(root->val);
//
//        // �����ǰ�ڵ�ΪҶ�ӽڵ�Ͱ�·������v��(����һ��Ҫʹ������v��ȷ��ÿ��·��������v��)
//        if (!root->left && !root->right) {
//            v.push_back(path);
//            return;
//        }
//
//        // Ȼ���������ҵݹ�
//        getBinaryTreePaths(v, root->left, path);
//        getBinaryTreePaths(v, root->right, path);
//
//    }
//
//    // ������ķ���������һ��Ľ�
//    void getBinaryTreePathsPlus(vector<string>& v, TreeNode* root, string path) {
//        if (root) {
//            // ��·�������Ԫ��
//            path += to_string(root->val);
//            // �жϵ�ǰ�ڵ��Ƿ���Ҷ�ӽڵ�
//            if (!root->left && !root->right) {
//                // �����Ҷ�ӽڵ�,�ѵõ��ĳ��ȷ���v�У��Ϳ���ֱ�ӷ�����
//                v.push_back(path);
//                return;
//            }
//            else {
//                // ��Ȼ����Ҫ�������ҵݹ�
//                // ע�⣡��·�������˼Ӽ�ͷ����
//                path += "->";
//                getBinaryTreePathsPlus(v, root->left, path);
//                getBinaryTreePathsPlus(v, root->right, path);
//            }
//        }
//    }
//
//    
//
//
//
//};
//int main() {
//
//    /*TreeNode* n1 = new TreeNode(1);
//    TreeNode* n2 = new TreeNode(2);
//    TreeNode* n3 = new TreeNode(3);
//    n1->left = n2;
//    n1->right = n3;
//
//    TreeNode* n4 = new TreeNode(5);
//    n2->right = n4;
//
//
//    Solution s;
//    vector<string> v = s.binaryTreePaths(n1);*/
//
//	return 0;
//}