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
//    // ̫�����ˣ������жϻ��ģ�����������жϵ�����
//    // ˼·��������ת��Ȼ��ͬʱ������������۲��Ƿ����
//    // ��Ϊ�����ǲ����ܶ��۱Ƚϵģ�����ֻ������
//    // ����..
//    bool isPalindrome1(ListNode* head) {
//        // ׼��һ������
//        vector<int> myV;
//
//        // ͻȻ����һ����...�����������ʱ���벻��ʲô��д�������Ի���ת����Ϥ��vector������..
//        while (head) {
//            myV.push_back(head->val);
//            head = head->next;
//        }
//
//        // �����Ƚϵ�����������ת������Ϥ�ıȽ������Ƿ��ǻ��ĵ�����
//        // һ��forѭ��ֱ�Ӹ㶨
//        // �ðɣ��Ҵ��ˣ�����Ӧ��ʹ��˫ָ�룬�����Ͳ���Ҫ�ж��������
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
//    // ����һ��Time Limit Exceeded...���Ի��ǵ��뵽һ������İ취��..
//    // ˼·��Ϊ������O(1)�Ŀռ临�Ӷȣ����Բ��÷�ת����ķ���
//    // �ҵ������м�Ľڵ㣬�ѴӸýڵ��Ժ������ת������ͷ��β����ѭ������
//    // bool isPalindrome(ListNode* head) {
//        // �����ֻ����ˣ���취�õ��м�ڵ�
//        // ���õ����нڵ������
//        // �Ա���...    
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