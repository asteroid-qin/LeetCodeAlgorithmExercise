//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ҳ�S��ÿ���ַ����ַ�C����̾���
//    // ˼·���ȴ�0��ʼ���������ַ�����pre��¼��һ��C���ֵ��±꣬�����õ�ǰ�ַ�Ϊpre-i��Ҳ���Ǿ�����һ�γ����ַ��ľ���
//    // Ȼ������һ�ѣ��Ӻ���ǰ�ң���last��¼��һ��C���ֵ�С�꣬�����õ�ǰ�ַ�Ϊlast-i��Ҳ���Ǿ�����һ�γ����ַ��ľ���
//    // �����ԣ�ÿһ���ַ����ַ�C����̾��룬�������μ���ĵõ��������Сֵ
//    vector<int> shortestToChar(string S, char C) {
//        vector<int> res(S.size());
//
//        int pre = -100000;
//        for (int i = 0; i < S.size(); i++) {
//            if (S[i] == C) pre = i;
//            res[i] = i - pre;
//        }
//
//        int last = 100000;
//        for (int i = S.size() - 1; i >= 0; i--) {
//            if (S[i] == C) last = i;
//            res[i] = min(res[i], last - i);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}