//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺�뷵�ذ��� ����ʱ��� �ļ�������ж�������ļ����򷵻� ����ĸ˳��������� ���Ǹ���
//    // ˼·��ͬʱ����releaseTimes��keysPressed����26���ȵ������¼ÿ���ַ��ĳ���ʱ�䣨ֻҪ���ֵ��
//    // ������������飬�����ʱ���time���ַ�c������ǰֵ���ڵ���time������time��c
//    // ��Ȼ��������̿���ͬʱ���У���
//    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
//        int arr[26] = { 0 };
//        for (int i = 0; i < releaseTimes.size(); i++) {
//            int index = keysPressed[i] - 'a';
//            if (i == 0) {
//                arr[index] = releaseTimes[i];
//            }
//            else {
//                arr[index] = max(arr[index],releaseTimes[i] - releaseTimes[i-1]);
//            }
//        }
//
//        char c = 'a';
//        for (int i = 0, time = 0; i < 26; i++) {
//            if (time <= arr[i]) {
//                time = arr[i];
//                c = i + 'a';
//            }
//        }
//
//        return c;
//    }
//
//    // ʱ�临�Ӷȣ�O(n)���ռ临�Ӷȣ�O(1)
//    char slowestKeyP(vector<int>& releaseTimes, string keysPressed) {
//        char res = keysPressed[0];
//
//        for (int i = 1, time = releaseTimes[0]; i < releaseTimes.size(); i++) {
//            int val = releaseTimes[i] - releaseTimes[i - 1];
//            if (time < val) {
//                time = val;
//                res = keysPressed[i];
//            }
//            else if (time == val) {
//                res = max(res, keysPressed[i]);
//            }
//
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}