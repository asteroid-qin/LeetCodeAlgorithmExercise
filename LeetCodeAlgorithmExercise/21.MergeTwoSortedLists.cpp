//#include<iostream>
//#include<string>
//using namespace std;
//
//
//
//// �ṹ��node
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//void printListNode(ListNode* now);
//// �ҵĽ������
//class Solution {
//public:
//	// ���õݹ�������������ʹ��whileѭ������������½�һ������ڵ㣬���ı�ԭ�������ڵ㣩
//	// �����Ĺؼ�����Ӧ�ó�ʼ��һ��ָ��now������һ��ָ��result��¼����ǰ��λ��
//	// ������ָ��now��next���������list�������Ϳ��Լ�ʹnowָ��ÿ��ѭ�����ƣ�
//	// resultҲ���Խ�����ץסnowָ���γ������ͷ
//	// ����ٰ����result.next�����أ���Ϊ�½��Ľڵ��Ǵ�next��ʼ��
//	// ��������12ms����Ϊ�����Լ��½���node�����ӣ������е����������⣩
//	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//		// ��ʼ��һ��ָ�룬��next���������list
//		ListNode* now = new ListNode(-1);
//		// ��result��ס���
//		ListNode* result = now;
//
//		// ֱ��һ��whileѭ����������l1��l2�����ǿ�ָ�룩
//		while (l1 && l2) {
//			// ��������ֵС�ڵ��������ֵ����ôӦ��ȡ�����ֵ����ָ�����
//			if (l1->val >= l2->val) {
//				now->next = new ListNode(l2->val);
//				l2 = l2->next;
//			}
//			else {		// ��֮��Ȼ
//				now->next = new ListNode(l1->val);
//				l1 = l1->next;
//			}
//			// ��now����
//			now = now->next;
//		}
//
//
//		// ����if�жϣ������������
//		// l1Ϊnull��l2��Ϊnull
//		// l2Ϊnull��l1��Ϊnull
//		// l1��l2��Ϊnull(����Ҫ����)
//		if (!l1 && l2) {
//			// ��l2ʣ�µĸ�now
//			while (l2) {
//				now->next = new ListNode(l2->val);
//
//				// now �� l2����
//				now = now->next;
//				l2 = l2->next;
//			}
//		}
//		else if (l1 && !l2) {
//			// ͬ��
//			while (l1) {
//				now->next = new ListNode(l1->val);
//
//				now = now->next;
//				l1 = l1->next;
//			}
//		}
//
//		// ���return
//		return result->next;
//	}
//};
//
//// ��ӡ�ڵ㷽��
//void printListNode(ListNode* now) {
//	int i = 0;
//
//	while (true) {
//		if (now == nullptr) {
//			break;
//		}
//		
//		cout << "��ǰ�±꣺" << i << "ֵΪ��" << now->val << endl;
//		i++;
//		now = now->next;
//	}
//}
//
//// ���ڲ��Ե�main����
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