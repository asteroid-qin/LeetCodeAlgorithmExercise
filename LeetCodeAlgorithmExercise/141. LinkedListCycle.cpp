//#include<iostream>
//#include<set>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode(int x) : val(x), next(NULL) {}
//	
//};
//
//class Solution {
//public:
//	// 根据挺简单的，直接用set存曾经存在的就好了
//	// 没有就往里面存，有就返回true，默认返回false
//	// 一次过，第二种是所谓的快慢指针（最优解）。
//	bool hasCycle(ListNode* head) {
//		// 记录当前指向的位置
//		ListNode* now = head;
//
//		// 准备一个set
//		set<ListNode*> mySet;
//
//		// 直接一个while循环
//		while (now) {
//			// 去map中查
//			if (mySet.count(now)) {
//				// 如果找到了,是第二次遇到就代表存在一个循环
//				return true;
//			}
//
//			// 如果没有就放入set中
//			mySet.insert(now);
//			// 下移
//			now = now->next;
//		}
//
//		// 默认值
//		return false;
//	}
//};
//
//int main() {
//
//	return 0;
//}