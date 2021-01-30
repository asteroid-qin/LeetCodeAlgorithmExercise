//#include<iostream>
//#include<vector>
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
//    // 太经典了，又是判断回文，不过这次是判断单链表
//    // 思路：把链表倒转，然后同时遍历两个链表观察是否相等
//    // 因为链表是不可能对折比较的，所以只能这样
//    // 难受..
//    bool isPalindrome1(ListNode* head) {
//        // 准备一个容器
//        vector<int> myV;
//
//        // 突然明白一件事...这个链表我暂时是想不到什么简单写法，所以还是转成熟悉的vector来做把..
//        while (head) {
//            myV.push_back(head->val);
//            head = head->next;
//        }
//
//        // 这样比较单链表的问题就转换成熟悉的比较数组是否是回文的问题
//        // 一个for循环直接搞定
//        // 好吧，我错了，这里应该使用双指针，这样就不需要判断特殊情况
//        for (int i = 0, j = myV.size() - 1; i < j; i++, j--) {
//            if (myV[i] != myV[j]) {
//                return false;
//            }
//        }
//
//
//        return true;
//    }
//
//    // 抛了一个Time Limit Exceeded...所以还是得想到一个特殊的办法啊..
//    // 思路：为了满足O(1)的空间复杂度，可以采用反转链表的方法
//    // 找到链表中间的节点，把从该节点以后的链表反转，最后从头和尾还是循环遍历
//    // bool isPalindrome(ListNode* head) {
//        // 所以又回来了，想办法得到中间节点
//        // 先拿到所有节点的数量
//        // 自闭了...    
//
//    // }
//};
//
//int main() {
//    vector<int> myV(0);
//
//    cout << myV[0] << endl;
//    cout << "result:" << (-1) / 2<< endl;
//
//	return 0;
//}