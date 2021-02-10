//#include<iostream>
//#include<queue>
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
//    queue<TreeNode*> q;
//    // Ŀ�꣺�������������ߵĽڵ���Ϊ����㣬����ÿһ���ڵ㶼û����ڵ㣬ֻ��һ�����ڵ�
//    // ˼·����������ض������ջ���õ�����߽ڵ㣬ʹ��һ������������������Ľ����Ȼ��ѭ�������ҽڵ���󷵻ؼ���
//    // �����������ǵ�ֱ���ڵݹ�ʱ�������Ľṹ����
//    // ˼·�����ڵ�ǰ�ڵ㣬�����Լ�����ڵ�Ϊnull��������ǰ�ڵ���Ϊ��һ���ڵ���ҽڵ�
//	  // ���ʹ���ڱ��ڵ㣬����������ڱ����ҽڵ㣬�����Ͳ��ÿ���null���������д�ĸ��Ӽ��
//    TreeNode* increasingBST(TreeNode* root) {
//        dfs(root);
//
//        TreeNode* head = new TreeNode();
//        TreeNode* pre = head;
//
//        while (!q.empty()) {
//            pre->right = q.front();
//            pre = pre->right;
//            q.pop();
//        }
//
//        return head->right;
//    }
//
//    void dfs(TreeNode* root) {
//        if (!root) {
//            return;
//        }
//
//        dfs(root->left);
//        root->left = nullptr;
//        q.emplace(root);
//        dfs(root->right);
//    }
//
//
//    TreeNode* now = nullptr;
//    
//    // ���±�д��
//    TreeNode* increasingBSTP(TreeNode* root) {
//        TreeNode* ans = new TreeNode();
//        now = ans;
//
//        dfs(root);
//
//
//        return ans->right;
//    }
//
//    void dfsP(TreeNode* root) {
//        if (!root) {
//            return;
//        }
//        
//        dfs(root->left);
//
//        root->left = nullptr;
//        now->right = root;
//        now = now->right;
//
//        dfs(root->right);
//    }
//};
//
//int main() {
//	return 0;
//}