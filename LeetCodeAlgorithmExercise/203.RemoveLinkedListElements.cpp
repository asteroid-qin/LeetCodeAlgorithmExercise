//#include<iostream>
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
//    // ����������һ�������ļ��⣬�������⣡��
//    // ��Ϊ����������ԣ���Ҫɾ��ĳһ��������Ҫ�ѶϿ����������ӣ���Ҫ��¼��һ�������λ��
//    // һ����д�꣬ϣ��һ�ι�..
//    // ��Щ�ط�û�п��ǵ���������˼·�ǶԵ�
//    // PS���´ο�������ʱ��һ��Ҫ�����ܷ�ʹ������ͷ�ڵ�...
//    ListNode* removeElements(ListNode* head, int val) {
//        //����һ������ͷ���
//        ListNode* dummyNode = new ListNode(val - 1);
//        dummyNode->next = head;
//        ListNode* prev = dummyNode;
//        //ȷ����ǰ�����н��
//        while (prev->next) {
//            if (prev->next->val == val) {
//                prev->next = prev->next->next;
//            }
//            else {
//                prev = prev->next;
//            }
//        }
//        return dummyNode->next;
//    }
//};
//
//int main() {
//	return 0;
//}