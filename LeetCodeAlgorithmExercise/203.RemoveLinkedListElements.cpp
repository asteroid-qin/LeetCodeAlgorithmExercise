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
//    // 终于遇上了一道真正的简单题，链表问题！！
//    // 因为链表的特殊性，需要删除某一个链表并想要把断开处重新连接，需要记录上一个链表的位置
//    // 一口气写完，希望一次过..
//    // 有些地方没有考虑到，但整个思路是对的
//    // PS：下次考链表题时，一定要考虑能否使用虚拟头节点...
//    ListNode* removeElements(ListNode* head, int val) {
//        //创建一个虚拟头结点
//        ListNode* dummyNode = new ListNode(val - 1);
//        dummyNode->next = head;
//        ListNode* prev = dummyNode;
//        //确保当前结点后还有结点
//        while (prev->next) {
//            if (prev->next->val == val) {
//                prev->next = prev->next->next;
//            }
//            else {
//                prev = prev->next;
//            }
//        }
//        return dummyNode->next;
//    }
//};
//
//int main() {
//	return 0;
//}