//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：计算两个日期相隔的天数（日期以YYYY-MM-DD格式）
//    // 思路：可以计算date1的天数，然后计算date2的天数，返回两者相减
//    // 也可以，先让date1的日期小于date2（swap)
//    // 再计算date1和date2隔的年（把年换算成天数）
//    // 最后把年换算成的天数-date1的天数+date1这一年的天数+date2的天数，返回即可
//    // 我记得一个公式可以直接根据年月日算出距离1970年1月1日多少天，那样直接套公式就足够了
//    int daysBetweenDates(string date1, string date2) {
//        if (date1 > date2) {
//            swap(date1, date2);
//        }
//
//        vector<int> d1 = getNum(date1);
//        vector<int> d2 = getNum(date2);
//        int mon[11] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 };
//        int res = 0;
//
//        for (int i = d1[0]; i < d2[0]; i++) {
//            res += 365;
//
//            if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) { // 闰年
//                res++;
//            }
//        }
//
//        // 计算date1月的天数
//        for (int i = 0; i < d1[1] - 1; i++) {
//            res -= mon[i];
//        }
//        // 计算date2月的天数
//        for (int i = 0; i < d2[1] - 1; i++) {
//            res += mon[i];
//        }
//
//        // 如果date1是闰年并且月份大于2，那还需要-1
//        if (d1[1] > 2 && d1[0] % 4 == 0 && (d1[0] % 100 != 0 || d1[0] % 400 == 0)) {
//            res--;
//        }
//        // 如果date2是闰年并且月份大于2，那还需要+1
//        if (d2[1] > 2 && d2[0] % 4 == 0 && (d2[0] % 100 != 0 || d2[0] % 400 == 0)) {
//            res++;
//        }
//
//        return res - d1[2] + d2[2]; // 最后减去日
//    }
//
//    // 把字符串转成数组（0放年，1放月，2放天）
//    vector<int> getNum(string date) {
//        vector<int> res(3);
//        string s;
//        int index = 0;
//
//        for (int i = 0; i < date.size(); i++) {
//            if (date[i] == '-') {
//                res[index++] = stoi(s);
//                s.clear();
//                continue;
//            }
//
//            s.push_back(date[i]);
//        }
//        res[index] = stoi(s);
//
//        return res;
//    }
//    
//};
//
//int main() {
//	return 0;
//}