//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺������chars�е��ַ���ƴ��words����ÿһ���ַ�����ƴװͬһ���ַ���ʱ��chars��һ���ַ�ֻ��ʹ��һ��
//    // ˼·����charsת��26��С��arr��valueΪ�����ַ���������
//    // �ٱ���words����ÿһ������ͬ��ת��arr��
//    // ͬʱ��������arr���ַ���arr���������arr��ֵ�����ַ���arr��break������һ��ѭ�����������ѵ�ǰ���ʵĳ��ȸ���res
//    int countCharacters(vector<string>& words, string chars) {
//        int arr[26] = { 0 };
//        for (auto c : chars) {
//            arr[c - 'a']++;
//        }
//
//        int res = 0;
//        for (auto s : words) {
//            int sArr[26] = { 0 };
//            for (auto c : s) {
//                sArr[c - 'a']++;
//            }
//
//            if (judge(sArr, arr)) {
//                res += s.size();
//            }
//        }
//
//        return res;
//    }
//
//    bool judge(int* a1, int* a2) {
//        for (int i = 0; i < 26; i++) {
//            if (a1[i] > a2[i]) {
//                return false;
//            }
//        }
//
//        return true;
//    }
//
//};
//
//int main() {
//	return 0;
//}