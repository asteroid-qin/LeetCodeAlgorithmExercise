//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺ȥ����͹��ʺ���߹��ʺ�Ĺ���ƽ��ֵ
//    // ˼·������һ��salary�������ֵ����Сֵ��sum����󷵻�sum-���ֵ-��Сֵ/salary.size()-2����
//    // ע����ĿҪ��salary��size�϶�����2����Ҫ���ĳ���0����������о��Ƿ���ֵ��double��
//    // ��֮ǰ��Ҫ����ת��double������������
//    double average(vector<int>& salary) {
//        int sum = 0, ma = 0, mi = 1000000; // 10^3 <= salary[i] <= 10^6,��͹���3000...
//
//        for (int& i : salary) {
//            sum += i;
//            ma = max(ma, i);
//            mi = min(mi, i);
//        }
//
//        return (sum - ma - mi) * 1.0 / (salary.size() - 2);
//    }
//};
//
//int main() {
//	return 0;
//}