//#include<iostream>
//#include<stack>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}   
//};
//
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        ListNode* prev = nullptr;
//        ListNode* curr = head;
//        while (curr) {
//            ListNode* nextTemp = curr->next;
//            curr->next = prev;
//            prev = curr;
//            curr = nextTemp;
//        }
//        return prev;
//    }
//
//    void myPrint(ListNode* n) {
//        while (n) {
//            cout << n->val << "->";
//        }
//
//        cout << endl;
//    }
//};
//
//int main() {
//    ListNode* n1 = new ListNode(1);
//    ListNode* n2 = new ListNode(2);
//    ListNode* n3 = new ListNode(3);
//    ListNode* n4 = new ListNode(4);
//    ListNode* n5 = new ListNode(5);
//
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//
//
//    Solution s;
//    s.myPrint(n1);
//
//    ListNode * now =  s.reverseList(n1);
//    s.myPrint(now);
//
//	return 0;
//}
