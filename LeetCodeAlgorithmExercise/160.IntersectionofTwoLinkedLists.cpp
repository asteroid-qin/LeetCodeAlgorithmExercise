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
//    // ���������������һ���뷨�ǣ�ʹ��set���һ����Ȼ������ڶ�����
//    // �ж��Ƿ���ڣ�������ھ�ֱ��return �ýڵ㲻ȻĬ�Ϸ���null
//    // ����������һ�л�����Ӧ��ʹ�ö�������������Եû�һ���뷨
//    // �������ⷨ����̫���ˣ���460ms������..�ð�..����д����..
//    ListNode* getIntersectionNode(ListNode * headA, ListNode * headB) {
//        if (!headA || !headB)
//            return NULL;
//
//        // ���������¼ָ��λ��
//        ListNode* mheadA = headA;
//        ListNode* mheadB = headB;
//
//        // ͬʱ��������ָ�룬�ཻʱֹͣ
//        // ����ָ��nullʱҲֹͣ
//        while (mheadA != mheadB) {
//            // �����ǰ����null��ָ��ǰ�ڵ����һ��
//            // ���ǡ���ǵĻ�����ָ�����Ľڵ�
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
//    // ���������������һ���뷨�ǣ�ʹ��set���һ����Ȼ������ڶ�����
//    // �ж��Ƿ���ڣ�������ھ�ֱ��return �ýڵ㲻ȻĬ�Ϸ���null
//    // ����������һ�л�����Ӧ��ʹ�ö�������������Եû�һ���뷨
//    // �������ⷨ����̫���ˣ���460ms������..�ð�..����д����..
//    ListNode* getIntersectionNode(ListNode * headA, ListNode * headB) {
//        if (!headA || !headB)
//            return NULL;
//
//        // ���������¼ָ��λ��
//        ListNode* mheadA = headA;
//        ListNode* mheadB = headB;
//
//        // ͬʱ��������ָ�룬�ཻʱֹͣ
//        // ����ָ��nullʱҲֹͣ
//        while (mheadA != mheadB) {
//            // �����ǰ����null��ָ��ǰ�ڵ����һ��
//            // ���ǡ���ǵĻ�����ָ�����Ľڵ�
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