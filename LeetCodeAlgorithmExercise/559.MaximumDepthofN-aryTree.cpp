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
//    // Ŀ�꣺��һ��n��������������
//    // ˼·����������������������ơ�
//    // ����null�ͷ���0�����ÿ���ڵ����ȣ�Ȼ�󷵻����е����ֵ + 1����
//    int maxDepth(Node* root) {
//        if (!root) {
//            return 0;
//        }
//        // �������root��vector�����ÿһ����ȵ����ֵ
//        int maxDep = 0;
//
//        for (auto i : root->children) {
//            maxDep = max(maxDep,maxDepth(i));
//        }
//
//        // ������������ȣ������Ǽ��ϵ�ǰ�ڵ����ȣ�
//        return maxDep + 1;
//    }
//};
//
//int main() {
//	return 0;
//}