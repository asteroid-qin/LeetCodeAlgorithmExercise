//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺��¼arr���ظ��ַ��ĳ��ȣ��������m��k--����k==0ʱ����true��Ĭ��false
//    // ˼·�������������ˡ�
//    bool containsPattern(vector<int>& arr, int m, int k) {
//        int n = arr.size();
//        if (n < m * k) return false;
//        int i, j;
//        for (i = 0; i <= n - m * k; ++i) {
//            for (j = i + m; j < i + m * k; ++j) {
//                if (arr[j] != arr[j - m]) break;
//            }
//
//            if (j == i + m * k) return true;
//        }
//        return false;
//    }
//};
//
//int main() {
//	return 0;
//}