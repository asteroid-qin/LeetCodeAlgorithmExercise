//#include<iostream>
//#include<vector>
//using namespace std;
//
//struct Node {
//    int val = -1;
//    Node* next = nullptr;
//    
//    Node(int val) {
//        this->val = val;
//    }
//
//    void insert(int index, int val) {
//        Node* head = this;
//        Node* node = next;
//        while (index--) {
//            head = head->next;
//            node = node->next;
//        }
//
//        head->next = new Node(val);
//        head->next->next = node;
//    }
//};
//
//class Solution {
//public:
//    // 目标：按既定顺序创建目标数组
//    // 简而言之，nums和index一一对应，要求把往下标index[i]处插入值nums[i]
//    // 思路：直接写一个链表
//    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
//        Node* head = new Node(-1);
//        for (int i = 0; i < index.size(); i++) {
//            head->insert(index[i], nums[i]);
//        }
//
//        head = head->next;
//        vector<int> res;
//        while (head) {
//            res.push_back(head->val);
//            head = head->next;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}