//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������ȣ���ʵ����������Ƕ�ײ��������ֵ
//    // ˼·���õ�ջ��˼�루�������ʹ��ջ��������"("��++������")"��--������������е����ֵ����
//    int maxDepth(string s) {
//        int maxDep = 0, dep = 0;
//
//        for (auto& c : s) {
//            if (c == '(') {
//                dep++;
//                maxDep = max(maxDep, dep);
//            }
//            else if (c == ')') {
//                dep--;
//            }
//        }
//
//        return maxDep;
//    }
//};
//
//int main() {
//	return 0;
//}