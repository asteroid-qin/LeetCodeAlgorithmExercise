//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//
//
//    // Ŀ�꣺�ҳ���̲�ȫ�ʣ�̫������������ø����ˣ�������������ܼ򵥣�������Ҳ�ǳ�����
//    // ˼·������map���Ȱ�licensePlate����ӳ�䣬�ٱ���words��������ÿһ��string�ȴ����map��Ȼ��ͬʱ����
//    // licenseplate��string��ӳ������С��0��ֱ������ѭ����������ж����string�Ĵ�С�Ƿ��֮ǰ��С��
//    // С�Ļ��͸�����̲�ȫ�ʺ���С���ȡ���󷵻���̲�ȫ��
//    string shortestCompletingWord(string licensePlate, vector<string>& words) {
//        int l[26] = { 0 };
//        for (auto c : licensePlate) {
//            if (isalpha(c)) {
//                l[toupper(c) - 'A']++;
//            }
//        }
//
//        string res;
//        int size = INT_MAX;
//        for (auto str : words) {
//            int w[26] = { 0 };
//
//            for (char c : str) {
//                w[toupper(c) - 'A']++;
//            }
//
//            for (int i = 0; i < 26; i++) {
//                if (w[i] - l[i] < 0) {
//                    goto to;
//                }
//            }
//
//            if (str.size() < size) {
//                res = str;
//                size = str.size();
//            }
//
//        to:;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}