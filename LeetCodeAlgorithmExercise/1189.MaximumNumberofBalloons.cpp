//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����text������ƴ��"balloon"�������������
//    // ˼·���������¼balloon������ַ�������������ban�е���Сֵ������lo����Сֵ
//    // ��󷵻�ban����Сֵ��lo����Сֵ/2�е���Сֵ
//    int maxNumberOfBalloons(string text) {
//        int arr[26] = { 0 };
//
//        for (auto& c : text) {
//            arr[c - 'a']++;
//        }
//
//        int sig = min( min(arr[0], arr[1]), arr[13]);
//        int dou = min(arr[11], arr[14]);
//
//        return min(sig, dou / 2);
//    }
//};
//
//int main() {
//	return 0;
//}