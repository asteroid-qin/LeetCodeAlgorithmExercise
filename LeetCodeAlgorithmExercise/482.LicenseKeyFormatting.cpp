//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�������s���и�ʽ�����ַ���s��-���飬Ҫ���һ���ر����ٷ�1���ַ���
//    // ������������k���ַ�������֮����-����
//    // ˼·�����ȸ��������ַ������-������ȫ���Ե���ֻ��Ҫ�ڷ����ʱ����ϼ���
//    // ȥ��-������ͱ���ˣ���s���մ�СΪk���з��飬ÿ����-�������������ǡ������
//    // ��ô�Ͱ�ʣ��Ĳ��ַ��ڵ�һ��
//    // ���ԣ������s��ȥ-�ĳ��ȣ��ڼ��㳤�ȶ�kȡ�ࡣ�������ʹ���1���Է��������ܾͰ�ʣ���
//    // ���ȷָ���һ�顣Ȼ��ʼѭ��ÿK�μ�һ��-��
//    // ѭ�������õ������ע�⣡������һ�������ǰѴ�д��ĸת����Сд��ĸ������
//    string licenseKeyFormatting(string S, int K) {
//        // ��ȥ��-����Сд��ĸת�ɴ�д���õ�ȫ�µ�S
//        string newS;
//        for (auto c : S) {
//            if (c == '-') continue;
//            if (!isdigit(c)) c = toupper(c);
//            newS.push_back(c);
//        }
//        // ����õ��ĳ��ȹ�С�ͷ���
//        if (newS.size() < K) {
//            return newS;
//        }
//        // �ж����newS�ܹ���K����
//        int newSSize = newS.size(), remainder = newSSize % K;
//
//        string res;
//        // ���ر�ĵ�һ�����result��
//        res = newS.substr(0, !remainder?K:0);
//        // ��ʼ���������ͨ��һ��
//        for (int i = res.size(); i < newSSize; i++) {
//            // ����ܹ���K��������Ҫ��ǰ�����-
//            if ((i - remainder) % K == 0) {
//                res.push_back('-');
//            }
//            res.push_back(newS[i]);
//        }
//        return res;
//    }
//
//    // ���߼��㴦��S�е��ַ�ͬʱ����ֵ����K
//    string licenseKeyFormattingP(string S, int K) {
//        // �õ���ȥ-�ĳ���
//        int sSize = getSSizeWithout_(S);
//        // �ȴ����������
//        if (sSize <= K) {
//            // ȥ��-���ѽ������
//            string res;
//            for (auto c : S) {
//                if (c != '-') {
//                    // �����Сд��ĸ����Ҫת��д
//                    res.push_back(!isdigit(c) ? toupper(c) : c);
//                }
//            }
//            return res;
//        }
//
//        string res;
//        // �õ�ȡ����
//        int remainder = sSize % K;
//        // ��Ȼ�ͱ������S������j������ʾres�е���Ч����
//        for (int i = 0, j = 0; i < S.size(); i++) {
//            // �������ۺ�
//            if (S[i] == '-') continue;
//
//            // �ȴ���ǰ�ַ�
//            const char c = !isdigit(S[i]) ? toupper(S[i]) : S[i];
//
//            // �ж�j�Ƿ�С��remainder���Ǿ���Ҫ��������Ҫ��������
//            if (j < remainder) {   // ����������Ϊ0�Ĵ���
//                // �Ѵ������ַ�����res��
//                res.push_back(c);
//                j++;
//                continue;
//            }
//            // ��Ҫ����������Ҳ����j==0�����
//            if (j != 0 && ((j - remainder) % K == 0)) {
//                res.push_back('-');
//            }
//            res.push_back(c);
//            j++;
//        }
//
//        return res;
//    }
//
//    // �õ�s�г���-�ĳ���
//    int getSSizeWithout_(string& s) {
//        int size = 0;
//        for (auto c : s) {
//            if (c != '-') {
//                size++;
//            }
//        }
//        return size;
//    }
//};
//
//int main() {
//    Solution s;
//    string  res = s.licenseKeyFormattingP("5F-2e-9-w-fsa-aewf",4);
//
//    cout << res << endl;
//	return 0;
//}