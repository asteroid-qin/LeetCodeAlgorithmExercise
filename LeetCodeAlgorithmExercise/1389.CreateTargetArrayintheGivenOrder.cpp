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
//    // Ŀ�꣺���ȶ�˳�򴴽�Ŀ������
//    // �����֮��nums��indexһһ��Ӧ��Ҫ������±�index[i]������ֵnums[i]
//    // ˼·��ֱ��дһ������
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