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
//    // 多重树的前序遍历..
//    // 太简单了，直接过..
//    vector<int> preorder(Node* root) {
//        vector<int> res;
//        dfs(root, res);
//
//        return res;
//    }
//
//    void dfs(Node* root, vector<int>& v) {
//        if (!root) {
//            return;
//        }
//
//        v.push_back(root->val);
//
//        for (auto chil : root->children) {
//            dfs(chil, v);
//        }
//    }
//};
//
//int main() {
//	return 0;
//}