//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：，请你删除最小 5% 的数字和最大 5% 的数字后，剩余数字的平均值
//    // 思路：先排序，然后计算5%范围的范围range，然后遍历arr求sum，只计算处于range到m - range以内的数字
//    // 最后返回 sum / (m - 2 * range) 即可
//    double trimMean(vector<int>& arr) {
//        sort(arr.begin(), arr.end());
//        int sum = 0, m = arr.size(), range = m * 0.05;
//
//        for (int i = 0; i < m; i++) {
//
//            if (i >= range && i < m - range) {
//                sum += arr[i];
//            }
//        }
//
//        double temp = m - 2 * range;
//        return sum / temp;
//    }
//};
//
//int main() {
//	return 0;
//}