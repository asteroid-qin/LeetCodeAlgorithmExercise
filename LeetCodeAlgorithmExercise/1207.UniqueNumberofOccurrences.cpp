//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ���������� arr�������æͳ��������ÿ�����ĳ��ִ�����
//    // ���ÿ�����ĳ��ִ������Ƕ�һ�޶��ģ��ͷ��� true�����򷵻� false��
//    // ˼·������arr��¼ÿһ�������ֵĴ�����Ȼ���ٱ���һ�ηŴ������������������Ⱦ�false����ȻĬ��true
//    // ע�⣺-1000 <= arr[i] <= 1000��1 <= arr.length <= 1000���������������set
//    bool uniqueOccurrences(vector<int>& A) {
//        int arr[2001] = { 0 };
//        for (auto& i : A) {
//            arr[i + 1000]++;
//        }
//
//        int m[1000] = { 0 };
//        for (int i = 0; i < 2001; i++) {
//            if (arr[i] == 0) continue;
//            if (!m[arr[i] - 1]) {
//                return false;
//            }
//            m[arr[i] - 1]++;
//        }
//
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}