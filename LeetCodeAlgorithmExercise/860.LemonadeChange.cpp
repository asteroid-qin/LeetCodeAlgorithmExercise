//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж��Ƿ����ǰ�������������
//    // ˼·������bills����map�����������
//    // �����ǰ������5�Ǿ�ֱ�Ӵ棬�����10����ô��Ҫ��5������10��
//    // �����ǰ������20����ôҪô����1��10��һ��5Ҫô����3��5��������ֵ5��10�������������ȷ���10
//    // ֻҪ����10����20ʱ������5��ֵС��0����ô����false����ȻĬ��true
//    // �÷���д��д�����ˣ����ǲ�������..
//    bool lemonadeChange(vector<int>& bills) {
//        int fiv = 0, te = 0;
//
//        for (int i : bills) {
//            if (i == 5) {
//                fiv++;
//            }
//            else if (i == 10) {
//                if (fiv == 0) {
//                    return false;
//                }
//
//                fiv--;
//                te++;
//            }
//            else {
//                if (te >= 1 && fiv >= 1) {
//                    te--;
//                    fiv--;
//                }
//                else if (te == 0 && fiv >= 3) {
//                    fiv -= 3;
//                }
//                else {
//                    return false;
//                }
//            }
//        }
//
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}