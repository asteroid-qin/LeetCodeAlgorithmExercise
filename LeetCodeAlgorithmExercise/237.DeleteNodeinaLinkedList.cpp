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
//	// �Ժ���һ���������ֻ����һ��������ԭ����Ҫɾ����ǰ�ڵ�...
//	// Ŀ�꣺����һ���ڵ㣬ɾ������ڵ�
//	// ˼·�����������ﲻ֪��Ҫɾ���ڵ��ͷ�ڵ���˭��ֻ���õ���ǰ�ڵ��β��
//	// ���Ե�ѧ��͵���������ѵ�ǰ�ڵ��ɵ�ǰ�ڵ�ָ�����һ���ڵ㼴��
//	// ���ò�˵������������������Ȥ
// 	void deleteNode(ListNode* node) {
//		// ע����Ŀ������������Ҫɾ���Ľڵ���Դ��ڣ����Ҳ���β��
//		// �ȸı䵱ǰ�ڵ��ֵ
//		node->val = node->next->val;
//		// �ѵ�ǰ�ڵ�ָ��ǰ�ڵ�����¸��ڵ㣬�������൱��ȥ������ǰ�ڵ���..
//		node->next = node->next->next;
//	}
//};
//
//int main() {
//	return 0;
//}