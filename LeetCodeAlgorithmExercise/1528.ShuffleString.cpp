//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����indices���и�ֵ����
//    // ˼·����򵥵ľ����½�res��ֵ���Ƚϸ��ӵľ���ԭ���޸�
//    // ����ģ��
//    string restoreString(string s, vector<int>& indices) {
//        string res(s.size(),' ');
//
//        for (int i = 0; i < s.size(); i++) {
//            res[indices[i]] = s[i];
//        }
//
//        return res;
//    }
//
//    // ����ԭ���޸�(�Կ��е�ʹ...)
//    string restoreStringP(string s, vector<int>& indices) {
//        for (int i = 0; i < s.size(); i++) {
//            if (indices[i] != i) { // Ϊ�˷�ֹ�γɻ�·����Ҫ�޸�indices��ֵ
//                int index = indices[i]; // Ҫ�޸ĵ��±�
//                char c = s[i]; // Ҫ�޸ĵ��ַ�
//
//                while (index != i) {
//                    swap(c, s[index]);
//                    swap(index, indices[index]);
//                }
//
//                s[i] = c;
//                indices[i] = i;
//            }
//        }
//
//        return s;
//    }
//};
//
//int main() {
//	return 0;
//}