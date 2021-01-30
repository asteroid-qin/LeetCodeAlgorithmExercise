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
//    // 见名知意，目标：把root的路径全部存放到vector中并返回
//    // 思路：设计二叉树，就应该想到递归！！需要使用string记录每次向下递归时的路径，当递归到叶子节点的时候就可以return了
//    vector<string> binaryTreePaths(TreeNode* root) {
//        // 创建一个容器
//        vector<string> v;
//
//        getBinaryTreePaths(v, root, "");
//
//        return v;
//    }
//
//    // 使用
//    void getBinaryTreePaths(vector<string>& v, TreeNode* root, string path) {
//        // 排除特殊情况
//        if (!root) {
//            return;
//        }
//
//        // 如果当前节点不为空的话把当前节点的值放入path中
//        // 注意此时需要进行非空判断！好吧，可以把它和叶子节点整合在一起
//        if (path != "") {
//            path += "->";
//        }
//        path += to_string(root->val);
//
//        // 如果当前节点为叶子节点就把路径放在v中(这里一定要使用引用v，确保每个路径都放在v中)
//        if (!root->left && !root->right) {
//            v.push_back(path);
//            return;
//        }
//
//        // 然后向左向右递归
//        getBinaryTreePaths(v, root->left, path);
//        getBinaryTreePaths(v, root->right, path);
//
//    }
//
//    // 在上面的方法上做了一点改进
//    void getBinaryTreePathsPlus(vector<string>& v, TreeNode* root, string path) {
//        if (root) {
//            // 往路径中添加元素
//            path += to_string(root->val);
//            // 判断当前节点是否是叶子节点
//            if (!root->left && !root->right) {
//                // 如果是叶子节点,把得到的长度放在v中，就可以直接返回了
//                v.push_back(path);
//                return;
//            }
//            else {
//                // 不然就需要向左向右递归
//                // 注意！！路径别忘了加箭头！！
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