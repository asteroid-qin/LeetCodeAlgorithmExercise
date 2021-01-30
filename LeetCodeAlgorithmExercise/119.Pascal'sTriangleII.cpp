//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 杨辉三角2.0
//    // 给一个行表，直接返回该行内的一串数据。根据题意，直接从左往右暴力算肯定是不行的
//    // 使用动态规划，当前的值是前面的值乘以当前的值-i除i
//    vector<int> getRow(int rowIndex) {
//        // 初始化vector容器
//        vector<int> v(rowIndex + 1, 1);
//
//        // 直接一个for循环（从1开始）
//        for (int i = 1; i < rowIndex; i++) {
//            // 因为存在数字相乘过大的问题，所以需要先转成long,最后再强转成int
//            v[i] = (int)(1L * v[i - 1] * 1L * (rowIndex - i + 1) / i);
//        }
//
//        return v;
//    }
//};
//
//int main() {
//
//	return 0;
//}