//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�����ƶ������ʽ���ַ���
//    // ˼·������һ��number������ƴ���õ�s��ֻȡ�����ַ���
//    // ����һ��s�����ʣ���ַ�С�ڵ���4����break����Ȼ��һֱ����׷�ӣ�ÿ���ξͶ��һ��-
//    // ��ô�о������д���ֳ��ֳ�...
//    string reformatNumber(string number) {
//        string s;
//        for (auto& c : number) {
//            if (c - '0' >= 0 && c - '0' <= 9) {
//                s.push_back(c);
//            }
//        }
//
//        string res;
//        int i = 0, m = s.size();
//        while (i < m - 4) {
//            for (int j = 0; j < 3; j++, i++) {
//                res.push_back(s[i]);
//            }
//            res.push_back('-');
//        }
//
//        if (m - i == 4) {
//            res.push_back(s[i]);
//            res.push_back(s[i + 1]);
//            res.push_back('-');
//            res.push_back(s[i + 2]);
//            res.push_back(s[i + 3]);
//        }
//        else if (m - i == 2) {
//            res.push_back(s[i]);
//            res.push_back(s[i + 1]);
//        }
//        else {
//            res.push_back(s[i]);
//            res.push_back(s[i + 1]);
//            res.push_back(s[i + 2]);
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}