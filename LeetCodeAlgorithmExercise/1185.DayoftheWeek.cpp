//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // Ŀ�꣺����һ�����ڣ��������һ���㷨���ж����Ƕ�Ӧһ���е���һ�졣
//    // ˼·��ͨ�����ڼ���������������%7�����أ�ͨ�����鷵�أ�
//    // ����1971 <=year<= 2100,������ǰ���1971ǰ��������֮��
//	  // ��Ȼ����ר���㷨...
//    string dayOfTheWeek(int day, int month, int year) {
//        string res[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
//        int arr[11] = { 31,28,31,30,31,30,31,31,30,31,30 };
//        int num = 719527;
//
//        for (int i = 1971; i < year; i++) {
//            num += 365;
//            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
//                num++;
//            }
//        }
//
//        for (int i = 0; i < month - 1; i++) {
//            num += arr[i];
//        }
//        if ((month > 2) && (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0)) {
//            num++;
//        }
//
//        num += day;
//
//        return res[num % 7];
//    }
//};
//
//int main() {
//	return 0;
//}