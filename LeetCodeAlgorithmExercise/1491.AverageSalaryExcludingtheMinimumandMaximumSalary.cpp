//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：去掉最低工资和最高工资后的工资平均值
//    // 思路：遍历一遍salary，求最大值和最小值和sum，最后返回sum-最大值-最小值/salary.size()-2即可
//    // 注意题目要求，salary的size肯定大于2不需要担心出现0的情况！还有就是返回值是double，
//    // 除之前需要把数转成double，再做除法！
//    double average(vector<int>& salary) {
//        int sum = 0, ma = 0, mi = 1000000; // 10^3 <= salary[i] <= 10^6,最低工资3000...
//
//        for (int& i : salary) {
//            sum += i;
//            ma = max(ma, i);
//            mi = min(mi, i);
//        }
//
//        return (sum - ma - mi) * 1.0 / (salary.size() - 2);
//    }
//};
//
//int main() {
//	return 0;
//}