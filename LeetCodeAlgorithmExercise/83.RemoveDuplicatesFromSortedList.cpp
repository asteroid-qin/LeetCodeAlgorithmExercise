//#include<iostream>
//using namespace std;
//
///*
//* Ҫʹ�õ�node�ڵ�
//*/
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//// ׼��һ���������ڴ�ӡ���list
//void printListNode(ListNode& node) {
//    // ��ʼ��һ��ָ��
//    ListNode* now = &node;
//
//    // ֱ��while��ӡ
//    cout << "��ʼ��ӡ��" << endl;
//    while (now) {
//        cout << now->val << " ";
//
//        // now ����
//        now = now->next;
//    }
//    cout << endl;
//}
//
//
//class Solution {
//public:
//    // ��Ŀ��Ҫ���ǣ�����һ�������Ľڵ�list��ȥ���ظ��Ĳ���
//    // ֮ǰ��һ����������࣬�������ﻻ�����������node�γɵ�list
//    // �����Ա���������Ҫʹ�õ�while�ͼ�¼��ǰ�ڵ��ָ�룬��Ϊnode�γɵ�list�������ģ�
//    // ����ֻҪ�ж�һ��node����һ��node�Ƿ��뵱ǰnode��Ⱦ��㹻��
//    // �������ǾͰѵ�ǰnodeָ�����һ��node���ɵ�ǰnodeָ�����һ��nodeָ�����һ��node���ɣ�����ȾͲ��ô���
//    // һ��Ҫ�ж��Ƿ�Ϊ�յ����
//    // ��������뷨�ܽ��˼·��׼������ָ�룬һ�����ڼ�¼��ǰ�����Ľڵ㣬һ�������´����Ľڵ㣬����һ���½ڵ�
//    // ����head��ֵ�����½ڵ㣬Ȼ��׼��������ֻ�е�ǰ��ڵ��ֵ�����ں���ڵ��ֵʱ������Ҫ��¼����ڵ��ֵ
//    // ��ע�⴦��null�������������Ϻ��µĽڵ�list�γɣ���Ϊresult�ǿ��ڶ��У�����ֱ�ӷ���
//    ListNode* deleteDuplicates(ListNode* head) {
//        // �ų���ֱ������null�����������LeetCode��֧��ʹ��nullptr��
//        if ( nullptr == head) {
//            return nullptr;
//        }
//
//        // ׼��һ��ָ�����ڼ�¼��ǰ�����Ľڵ�
//        ListNode* now = head;   
//        // ׼��һ������ڵ�(������Ϊ���Ҫ����result�ĵ�ַ��������Ҫʹ��new)
//         // ��������ʹ��static������LeetCode����֧�� 
//        ListNode* result = new ListNode(head->val);
//        // ��ʼ��һ��ָ�����ڼ�¼�´����Ľڵ�
//        ListNode* r_now = result;
//
//        // whileѭ����������ڵ�(����Ϊnow��ָ���)
//        while (now) {
//            // �õ���ǰ�ڵ����һ���ڵ��ֵ����Ҫ����null�жϣ�
//            if (now->next == nullptr) {
//                // ���ָ��Ϊnull�Ǿʹ�����������������˳�ѭ��
//                break;
//            }
//            // ��ָ������Ĵ������next��Ϊnull�����Ի�ȡnext����������
//            // ������Ҫ�жϵ�ǰ�ڵ��val�Ƿ񲻵�������ڵ��val
//            if (now->val != now->next->val) {
//                // �������ȣ���ô����Ҫ��next�ڵ��ֵ����ָ��result�ڵ��r_nowָ���next��
//                r_now->next = new ListNode(now->next->val);
//
//                // Ȼ����ָ��result�ڵ��r_nowָ�����
//                r_now = r_now->next;
//            }
//            // ��nowָ�����
//            now = now->next;
//        }
//
//        return result;
//    }
//};
//
//// ��ʼ����
//int main() {
//    // ����һ������ڵ�
//    ListNode n1(1);
//    ListNode n2(1);
//    ListNode n3(2);
//    ListNode n4(3);
//    ListNode n5(3);
//    ListNode n6(3);
//    ListNode n7(4);
//
//    n1.next = &n2;
//    n2.next = &n3;
//    n3.next = &n4;
//    n4.next = &n5;
//    n5.next = &n6;
//    n6.next = &n7;
//
//    Solution s;
//
//    printListNode(n1);
//    
//    ListNode* r = s.deleteDuplicates(&n1);
//
//    cout << endl << "ȥ�����,�õ������" << endl;
//
//    printListNode(*r);
//	return 0;
//}