//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ������ n������ÿ����λ��ӵ㣨�� "." ���ţ���Ϊǧλ�ָ���������������ַ�����ʽ���ء�
//    // ˼·������n����ÿһλתchar����string��ÿ��λ���һ��.
//    // returnǰ���ж����һλ�Ƿ�Ϊ.,�Ǿ�pop,Ȼ���ٷ�ת�����return
//    // ע�⣡0 <= n < 2^31�����Ե����⴦��n==0���������
//    string thousandSeparator(int n) {
//        if (n == 0) {
//            return "0";
//        }
//        string res;
//
//        for (int i = 0; n; i++, n /= 10) {
//            res.push_back(n % 10 + '0');
//            if ((i + 1) % 3 == 0) {
//                res.push_back('.');
//            }
//        }
//        if (res[res.size() - 1] == '.') {
//            res.pop_back();
//        }
//
//        reverse(res.begin(), res.end());
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}