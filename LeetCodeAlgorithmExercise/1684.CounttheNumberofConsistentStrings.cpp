//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�ж�words��ÿ���ַ��Ƿ���allowed�г���
//    // ˼·����allowed����arr���飬value������֡�Ĭ��0����δ����
//    // Ȼ�����words��������ÿһ���ַ���ȥarr�в飬���ֵ����0��break������ַ�ͳͳ�����count++
//    // ��󷵻�count
//    int countConsistentStrings(string allowed, vector<string>& words) {
//        int count = 0;
//
//        int arr[26] = { 0 };
//        for (char& c : allowed) {
//            arr[c - 'a']++;
//        }
//
//        for (string& s : words) {
//            for (char& c : s) {
//                if (!arr[c - 'a']) {
//                    count--;
//                    break;
//                }
//            }
//            count++;
//        }
//
//        return count;
//    }
//};
//
//int main() {
//	return 0;
//}