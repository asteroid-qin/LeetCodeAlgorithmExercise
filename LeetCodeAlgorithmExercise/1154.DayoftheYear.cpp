//#include<iostream>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：给一个以YYYY-MM-DD格式的字符串date，返回这是YYYY年的第几天
//    // 思路：首先得拿到YYYY判断是否是闰年
//    // 然后再拿到MM，通过MM拿到MM的前一个月的所有天。
//    // 最终结果就是到MM月前的天数+DD，如果MM大于2并且当前年是闰年就--，最后返回
//    int dayOfYear(string date) {
//        string temp;
//        int year = -1, month = 0, day = 0;
//        for (int i = 0; 1 ; i++) {
//            if (date[i] == '-') {
//                if (year != -1) {
//                    month = stoi(temp);
//                }
//                else {
//                    year = stoi(temp);
//                }
//                temp.clear();
//            }
//            else if(i == date.size() - 1){
//                temp.push_back(date[i]);
//                day = stoi(temp);
//                break;
//            }
//            else {
//                temp.push_back(date[i]);
//            }
//        }
//
//        int res = getDay(month) + day;
//
//        if (month > 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
//            res++;
//        }
//
//        return res;
//    }
//
//    int getDay(int m) {
//        int res = 0;
//        int arr[11] = { 31,28,31,30,31,30,31,31,30,31,30};
//        
//        for (int i = 0; i < m - 1; i++) {
//            res += arr[i];
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}