//#include<iostream>
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
//	// 迷糊了一会儿，发现只传了一个参数，原来是要删除当前节点...
//	// 目标：传入一个节点，删除这个节点
//	// 思路：很明显这里不知道要删除节点的头节点是谁，只能拿到当前节点的尾。
//	// 所以得学会偷梁换柱，把当前节点变成当前节点指向的下一个节点即可
//	// 不得不说，这道题理解题意后很有趣
// 	void deleteNode(ListNode* node) {
//		// 注意题目的限制条件，要删除的节点绝对存在，并且不在尾部
//		// 先改变当前节点的值
//		node->val = node->next->val;
//		// 把当前节点指向当前节点的下下个节点，这样就相当于去除掉当前节点了..
//		node->next = node->next->next;
//	}
//};
//
//int main() {
//	return 0;
//}