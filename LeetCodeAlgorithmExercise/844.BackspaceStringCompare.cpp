//#include<iostream>
//#include<stack>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж��ַ���S�Ƿ�����ַ���T���������ַ�#�ᵼ��ɾ��ǰ��һ���ַ���
//    // ˼·��ʹ��ջ�������ַ�����ջ������#�ͳ�ջ�����ͬʱ��������ջ���ж��Ƿ����
//    // ����һ�ַ�����ֱ�ӴӺ���ǰ����S��T����¼#�Ĵ����������ǰ#�Ĵ�����Ϊ0���ҵ�ǰ�ַ���Ϊ#����ô�Ͱѵ�ǰ�ַ���Ϊ#
//    // �������ַ��������ֱ���ж������ַ����Ƿ���ȼ��ɡ��ռ临�Ӷȴ�O(n)�Ż���ΪO(1)��
//    bool backspaceCompare(string S, string T) {
//        stack<char> s;
//        stack<char> t;
//
//        for (auto c : S) {
//            if (c == '#') {
//                if (!s.empty()) {
//                    s.pop();
//                }
//                continue;
//            }
//            s.emplace(c);
//        }
//
//        for (auto c : T) {
//            if (c == '#') {
//                if (!t.empty()) {
//                    t.pop();
//                }
//                continue;
//            }
//            t.emplace(c);
//        }
//
//        if (s.size() != t.size()) {
//            return false;
//        }
//
//        while (!s.empty()) {
//            if (s.top() != t.top()) {
//                return false;
//            }
//
//            s.pop();
//            t.pop();
//        }
//
//        return true;
//    }
//
//
//    bool backspaceCompareP(string S, string T) {
//        for (int i = S.size() - 1, count = 0; i >= 0; i--) {
//            if (S[i] == '#') {
//                count++;
//                continue;
//            }
//           
//            if (count != 0) {
//                S[i] = '#';
//                count--;
//            }
//        }
//
//        for (int i = T.size() - 1, count = 0; i >= 0; i--) {
//            if (T[i] == '#') {
//                count++;
//                continue;
//            }
//
//            if (count != 0) {
//                T[i] = '#';
//                count--;
//            }
//        }
//
//        int i = 0, j = 0;
//        while(i < S.size() && j < T.size()) {
//            if(S[i] == '#' || T[j] == '#') {
//                i += (S[i] == '#');
//                j += (T[j] == '#');
//                continue;
//            }
//
//            if (S[i] != T[j]) {
//                return false;
//            }
//        }
//
//        while (i < S.size()) {
//            if (S[i] != '#') {
//                return false;
//            }
//            i++;
//        }
//
//        while (j < T.size()) {
//            if (T[j] != '#') {
//                return false;
//            }
//            j++;
//        }
//
//        return (i == S.size()) && (j == T.size());
//    }
//
//    // ���ǿ����Ż������˹ٷ���֮��..ֱ������#��ͬʱ�ж������ַ����Ƿ���ȣ������棡����
//    bool backspaceCompareP(string S, string T) {
//        // һ����forѭ����ֱ�ӽ�����⣡��
//        for (int i = S.size() - 1, j = T.size() - 1, sNum = 0, tNum = 0; i >= 0 || j >= 0; i--, j--) {
//            for (; i >= 0 && (S[i] == '#' || sNum != 0); i--) {
//                sNum += (S[i] == '#') ? 1 : -1;
//            }
//            for (; j >= 0 && (T[j] == '#' || tNum != 0); j--) {
//                tNum += (T[j] == '#') ? 1 : -1;
//            }
//
//            char s = (i >= 0) ? S[i] : '#';
//            char t = (j >= 0) ? T[j] : '#';
//
//            if (s != t) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}