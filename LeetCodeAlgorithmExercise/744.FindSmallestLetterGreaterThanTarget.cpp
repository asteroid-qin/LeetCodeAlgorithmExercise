//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��char������Ѱ�ұ�target����letters����С���ַ���ע�⣡��letter���ź���ģ�
//    // ˼·��̫���ˡ���ֱ�Ӵ�������forѭ�����ɡ�
//    // ����̫���ˣ�������һ���ӣ�ʹ�ö��ַ�
//    char nextGreatestLetter(vector<char>& letters, char target) {
//        for (auto c : letters) {
//            if (c > target) {
//                return c;
//            }
//        }
//
//        // ��������Ĭ�Ϸ��ص�һ���ַ����Ҳ���
//        return letters[0];
//    }
//	  // ����
//    char nextGreatestLetterP(vector<char>& letters, char target) {
//        int i = 0, j = letters.size() - 1, mid;
//
//        while (i < j) {
//            mid = (i + j) / 2;
//
//            if (target >= letters[mid]) {
//                i = mid + 1;
//            }
//            else{
//                j = mid;
//            }
//        }
//
//        return letters[j] > target ? letters[j] : letters[0];
//    }
//
//
//};
//
//int main() {
//    Solution s;
//
//    vector<char> test = { 'c', 'f', 'j' };
//    s.nextGreatestLetterP(test, 'k');
//
//	return 0;
//}