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
//    // 目标：求二叉树的每一层的平均值，按照顺序放在vector中返回
//    // 思路：使用队列，采用bfs解决问题。每次开始前先计算有多少个元素，这决定了待会需要放入多少个元素，
//    // 这就是这一层元素个数。每次放入元素的时候记录它们的和，最后相除结果放在vector中即可
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
//    // 可以使用bfs，也可以使用dfs。这里使用的是dfs
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
//        // 这里注意！！如果当前count的大小比当前层数还小的话，是不能直接取索引的。
//        // 因为每次都是加1层，所以直接往后加1即可
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