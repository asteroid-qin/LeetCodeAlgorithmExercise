//#include<iostream>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//
//class Solution {
//public:
//    // Ŀ�꣺���ؽڵ��м�Ľڵ�
//    // ˼·������ָ�룬����ָ��ָ��յ�ʱ����ָ��ָ��ľ����ӽڵ�
//    // ��ȻҲ���Եõ�ListNode�����飬Ȼ�󷵻�(size + 1 ) / 2�±괦�Ľڵ�
//    ListNode* middleNode(ListNode* head) {
//        ListNode* quick = head;
//        ListNode* slow = head;
//
//        while (quick && quick->next) {
//            slow = slow->next;
//            quick = quick->next->next;
//        }
//
//        return slow;
//    }
//};
//
//int main() {
//	return 0;
//}