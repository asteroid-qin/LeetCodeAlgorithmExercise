//#include<iostream>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//    
//};
//
//class Solution {
//public:
//   
//    // 理解题意后，脑子里第一个想法是：使用set存第一个，然后遍历第二个，
//    // 判断是否存在，如果存在就直接return 该节点不然默认返回null
//    // 不过后面这一行话，不应该使用额外的容器，所以得换一个想法
//    // 第三道解法！！太妙了！！460ms就离谱..好吧..是我写错了..
//    ListNode* getIntersectionNode(ListNode * headA, ListNode * headB) {
//        if (!headA || !headB)
//            return NULL;
//
//        // 依照题意记录指针位置
//        ListNode* mheadA = headA;
//        ListNode* mheadB = headB;
//
//        // 同时遍历两个指针，相交时停止
//        // 或者指向null时也停止
//        while (mheadA != mheadB) {
//            // 如果当前不是null就指向当前节点的下一个
//            // 如果恰好是的话，就指向对面的节点
//            mheadA = (mheadA ? mheadA->next : headB);
//            mheadB = (mheadB ? mheadB->next : headA);
//        }
//        // 1 3  -- 2 8 9
//        return mheadA;
//    }
//};
//
//int main() {
//
//	return 0;
//}#include<iostream>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode(int x) : val(x), next(NULL) {}
//    
//};
//
//class Solution {
//public:
//   
//    // 理解题意后，脑子里第一个想法是：使用set存第一个，然后遍历第二个，
//    // 判断是否存在，如果存在就直接return 该节点不然默认返回null
//    // 不过后面这一行话，不应该使用额外的容器，所以得换一个想法
//    // 第三道解法！！太妙了！！460ms就离谱..好吧..是我写错了..
//    ListNode* getIntersectionNode(ListNode * headA, ListNode * headB) {
//        if (!headA || !headB)
//            return NULL;
//
//        // 依照题意记录指针位置
//        ListNode* mheadA = headA;
//        ListNode* mheadB = headB;
//
//        // 同时遍历两个指针，相交时停止
//        // 或者指向null时也停止
//        while (mheadA != mheadB) {
//            // 如果当前不是null就指向当前节点的下一个
//            // 如果恰好是的话，就指向对面的节点
//            mheadA = (mheadA ? mheadA->next : headB);
//            mheadB = (mheadB ? mheadB->next : headA);
//        }
//        // 1 3  -- 2 8 9
//        return mheadA;
//    }
//};
//
//int main() {
//
//	return 0;
//}