//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//
//};
//
//class Solution {
//public:
//    // Ŀ�꣺���������ÿһ���ƽ��ֵ������˳�����vector�з���
//    // ˼·��ʹ�ö��У�����bfs������⡣ÿ�ο�ʼǰ�ȼ����ж��ٸ�Ԫ�أ�������˴�����Ҫ������ٸ�Ԫ�أ�
//    // �������һ��Ԫ�ظ�����ÿ�η���Ԫ�ص�ʱ���¼���ǵĺͣ��������������vector�м���
//    vector<double> averageOfLevels(TreeNode* root) {
//        vector<double> res;
//        queue<TreeNode*> q;
//        q.push(root);
//
//        int size;
//        double sum;
//        while (!q.empty()) {
//            sum = 0;
//            size = q.size();
//            for (int i = 0; i < size; i++) {
//                TreeNode* node = q.front();
//
//                sum += node->val;
//                if (node->left) {
//                    q.push(node->left);
//                }
//                if (node->right) {
//                    q.push(node->right);
//                }
//                q.pop();
//            }
//
//            res.push_back(sum / size);
//        }
//
//        return res;
//    }
//
//    // ����ʹ��bfs��Ҳ����ʹ��dfs������ʹ�õ���dfs
//    vector<double> averageOfLevelsOr(TreeNode* root) {
//        vector<int> count;
//        vector<double> sum;
//        dfs(root, 0, count, sum);
//        vector<double> res(count.size());
//        for (int i = 0; i < count.size(); i++) {
//            res[i] = sum[i] / count[i];
//        }
//
//        return res;
//    }
//
//    void dfs(TreeNode* root,int step, vector<int>& count, vector<double>& sum) {
//        if (!root) {
//            return;
//        }
//
//        // ����ע�⣡�������ǰcount�Ĵ�С�ȵ�ǰ������С�Ļ����ǲ���ֱ��ȡ�����ġ�
//        // ��Ϊÿ�ζ��Ǽ�1�㣬����ֱ�������1����
//        if (count.size() < step + 1) {
//            count.push_back(1);
//            sum.push_back(root->val);
//        }
//        else {
//            count[step]++;
//            sum[step] += root->val;
//        }
//
//        dfs(root->left, step + 1, count, sum);
//        dfs(root->right, step + 1, count, sum);
//    }
//};
//
//int main() {
//	return 0;
//}