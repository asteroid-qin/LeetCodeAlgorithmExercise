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
//    // 目标：返回节点中间的节点
//    // 思路：快慢指针，当快指针指向空的时候，慢指针指向的就是子节点
//    // 当然也可以得到ListNode的数组，然后返回(size + 1 ) / 2下标处的节点
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