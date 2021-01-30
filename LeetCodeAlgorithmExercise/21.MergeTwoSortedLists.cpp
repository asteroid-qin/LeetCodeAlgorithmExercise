//#include<iostream>
//#include<string>
//using namespace std;
//
//
//
//// 结构体node
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//void printListNode(ListNode* now);
//// 我的解决方案
//class Solution {
//public:
//	// 不用递归想遍历链表最好使用while循环（这里采用新建一个多个节点，不改变原来两个节点）
//	// 这个题的关键在于应该初始化一个指针now，再用一个指针result记录它当前的位置
//	// ，再用指针now的next接受新造的list，这样就可以即使now指针每次循环后移，
//	// result也可以紧紧地抓住now指针形成链表的头
//	// 最后再把这个result.next给返回，因为新建的节点是从next开始的
//	// （最快好像12ms，因为都是自己新建的node并连接，所以有点慢再所难免）
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		// 初始化一个指针，用next接受新造的list
//		ListNode* now = new ListNode(-1);
//		// 用result记住结果
//		ListNode* result = now;
//
//		// 直接一个while循环（条件是l1、l2都不是空指针）
//		while (l1 && l2) {
//			// 如果下面的值小于等于上面的值，那么应该取下面的值，并指针后移
//			if (l1->val >= l2->val) {
//				now->next = new ListNode(l2->val);
//				l2 = l2->next;
//			}
//			else {		// 反之亦然
//				now->next = new ListNode(l1->val);
//				l1 = l1->next;
//			}
//			// 让now后移
//			now = now->next;
//		}
//
//
//		// 继续if判断，有三种情况：
//		// l1为null，l2不为null
//		// l2为null，l1不为null
//		// l1和l2都为null(不需要处理)
//		if (!l1 && l2) {
//			// 把l2剩下的给now
//			while (l2) {
//				now->next = new ListNode(l2->val);
//
//				// now 和 l2后移
//				now = now->next;
//				l2 = l2->next;
//			}
//		}
//		else if (l1 && !l2) {
//			// 同理
//			while (l1) {
//				now->next = new ListNode(l1->val);
//
//				now = now->next;
//				l1 = l1->next;
//			}
//		}
//
//		// 最后return
//		return result->next;
//	}
//};
//
//// 打印节点方法
//void printListNode(ListNode* now) {
//	int i = 0;
//
//	while (true) {
//		if (now == nullptr) {
//			break;
//		}
//		
//		cout << "当前下标：" << i << "值为：" << now->val << endl;
//		i++;
//		now = now->next;
//	}
//}
//
//// 用于测试的main方法
//int main() {
//	Solution s;
//	ListNode l1(1);
//	ListNode l2(2);
//	ListNode l3(4);
//	ListNode l4(1);
//	ListNode l5(2);
//	ListNode l6(3);
//
//	ListNode l7(8);
//	ListNode l8(10);
//
//	l1.next = &l2;
//	l2.next = &l3;
//	l3.next = &l7;
//
//	l4.next = &l5;
//	l5.next = &l6;
//	l6.next = &l8;
//
//	ListNode* ml1 = &l1;
//	ListNode* ml2 = &l4;
//
//
//	ListNode*  result = s.mergeTwoLists(ml1, ml2);
//	printListNode(result);
//
//
//	return 0;
//}