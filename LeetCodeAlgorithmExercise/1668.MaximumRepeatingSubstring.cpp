//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����ظ����ַ���
//    // ˼·��ֱ��whlieѭ����ÿһ��ѭ��res��+1��words��*2
//    // Ȼ����find���ҵ��˾ͽ�����һ��ѭ�����Ҳ�����ֱ��return res
//    // ��Ϊstring�ĳ��ȶ��Ƚ϶̣����Ժ����ɾ͹���..��ʵ��,���Կ����Ż���..
//    int maxRepeating(string sequence, string word) {
//        int res = 0, pos;
//        string temp = word;
//
//        while (word.size() <= sequence.size()) {
//            pos = sequence.find(word);
//
//            if (pos == string::npos) {
//                return res;
//            }
//            res++;
//            word += temp;
//        }
//
//        return res;
//    }
//
//};
//int main() {
//	return 0;
//}