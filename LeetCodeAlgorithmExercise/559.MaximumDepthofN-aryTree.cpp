//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//
//class Solution {
//public:
//    // 目标：给一个n叉树，求最大深度
//    // 思路：和求二叉树的最大深度类似。
//    // 等于null就返回0，算出每个节点的深度，然后返回其中的最大值 + 1即可
//    int maxDepth(Node* root) {
//        if (!root) {
//            return 0;
//        }
//        // 遍历这个root的vector，算出每一个深度的最大值
//        int maxDep = 0;
//
//        for (auto i : root->children) {
//            maxDep = max(maxDep,maxDepth(i));
//        }
//
//        // 返回这个最大深度（别忘记加上当前节点的深度）
//        return maxDep + 1;
//    }
//};
//
//int main() {
//	return 0;
//}