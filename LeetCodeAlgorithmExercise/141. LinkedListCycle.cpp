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
//	// ����ͦ�򵥵ģ�ֱ����set���������ڵľͺ���
//	// û�о�������棬�оͷ���true��Ĭ�Ϸ���false
//	// һ�ι����ڶ�������ν�Ŀ���ָ�루���Ž⣩��
//	bool hasCycle(ListNode* head) {
//		// ��¼��ǰָ���λ��
//		ListNode* now = head;
//
//		// ׼��һ��set
//		set<ListNode*> mySet;
//
//		// ֱ��һ��whileѭ��
//		while (now) {
//			// ȥmap�в�
//			if (mySet.count(now)) {
//				// ����ҵ���,�ǵڶ��������ʹ������һ��ѭ��
//				return true;
//			}
//
//			// ���û�оͷ���set��
//			mySet.insert(now);
//			// ����
//			now = now->next;
//		}
//
//		// Ĭ��ֵ
//		return false;
//	}
//};
//
//int main() {
//
//	return 0;
//}