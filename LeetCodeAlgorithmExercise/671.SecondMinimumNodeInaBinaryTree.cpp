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
//    // Ŀ�꣺����һ���������ĵڶ�С�ڵ�ֵ��û�оͷ���-1
//    // ˼·������root.val = min(root.left.val, root.right.val)��Ҳ����Խ����һ�㣬ֵ��Խ��Խ��
//    // �漰���㣬�Ƽ�ʹ��bfs�������ǰ��һ��û��root.val����ô������һ�����Сֵ����Ȼ��Ҫ������Ԫ�ؽ���
//    int findSecondMinimumValue(TreeNode* root) {
//        queue<TreeNode*> q;
//        q.push(root);
//
//        long m = LONG_MAX;
//        int size;
//        bool has;
//        while (!q.empty()) {
//            size = q.size();
//            has = false;
//            for (int i = 0; i < size; i++) {
//                TreeNode* node = q.front();
//                // �жϵ�ǰ��һ���Ƿ���root->val
//                has = has ? has : (node->val == root->val);
//                // �������root->val�����Сֵ
//                m = (node->val != root->val) ? min(m, 1L * node->val) : m;
//
//                if (node->left) {
//                    q.push(node->left);
//                    q.push(node->right);
//                }
//
//                q.pop();
//            }
//
//            if (!has) { // �����ǰ��һ��û��root->val,�˳����ѭ��
//                break;
//            }
//        }
//
//        if (m != LONG_MAX) {
//            return m;
//        }
//
//        return -1;
//    }
//};
//
//int main() {
//	return 0;
//}