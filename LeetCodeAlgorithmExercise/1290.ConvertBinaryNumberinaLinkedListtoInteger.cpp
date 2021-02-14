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
//    // 目标：返回该链表所表示数字的 十进制值 
//    // 思路：遍历就完事了
//    int getDecimalValue(ListNode* head) {
//        int res = 0;
//        while (head) {
//            res <<= 1;
//            res += head->val;
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