//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��A��B��ֻ����һ���Ҷ��еĵ���
//    // ˼·����A��B����ĵ�������set��Ȼ����A-��A��B�Ľ�������B-��A��B�Ľ�����.
//    // �ðɣ���Ȼ�����˼·ȷʵ���е��ǣ��ٶ�̫���ˣ���Ҫ�Ż�����������ϸ������ĿҪ��
//    // �����A����B������B������A��ֻ����һ�εĵ��ʡ����԰�A��B����һ�����壬��ʵ���������������Ψһһ�γ��ֵĵ��ʣ���
//    // ֻ��Ҫʹ��һ��map���ɣ���
//    vector<string> uncommonFromSentences(string A, string B) {
//        unordered_map<string, int> m;
//        for (int i = 0, j = 0; j < A.size(); ++j, i = j) {
//            while (j < A.size() && A[j] != ' ') {
//                j++;
//            }
//            m[A.substr(i, j - i)]++;
//        }
//        for (int i = 0, j = 0; j < B.size(); ++j, i = j) {
//            while (j < B.size() && B[j] != ' ') {
//                j++;
//            }
//            m[B.substr(i, j - i)]++;
//        }
//
//        vector<string> res;
//
//        for (auto it = m.begin(); it != m.end(); it++) {
//            if (it->second == 1) {
//                res.push_back(it->first);
//            }
//        }
//        
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}