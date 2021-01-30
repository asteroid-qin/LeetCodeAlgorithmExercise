//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    // 目标：求一个数组中三个数最大的乘积并返回
//    // 思路：用三个变量分别记录第一、第二、第三大的数，用两个变量记录第一、第二小的数。
//    // 最后返回第一大*第二大*第三大和第一大*第一小*第二小之间的最大值即可
//    // 为什么是这样？首先第二小的值大于等于0和最大值小于等于0的情况下，第一大*第二大*第三大的值绝对是最大的
//    // 问题是需要考虑第一小和第二小都是负数，然后他们的乘积是否大于第二*第三
//    // 总结上面的分析结果发现结果要么是第一大*第二大*第三大要么是第一大*第一小*第二小。所以直接返回他们之间的最大值
//    // 即可
//    int maximumProduct(vector<int>& nums) {
//        int i = INT_MIN, j = INT_MIN, k = INT_MIN;
//        int a = INT_MAX, b = INT_MAX;
//
//        for (auto n : nums) {
//            if (n > i) {
//                k = j;
//                j = i;
//                i = n;
//            }
//            else if (n > j) {
//                k = j;
//                j = n;
//            }
//            else if (n > k) {
//                k = n;
//            }
//
//            if (n < a) {
//                b = a;
//                a = n;
//            }
//            else if (n < b) {
//                b = n;
//            }
//        }
//        /*cout << "a:" << a << ", b:" << b << endl;
//        cout << "i:" << i << ", j:" << j << ", k:" << k << endl;*/
//        return max(a * b * i, i * j * k);
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> res = { 1,2,3,4 };
//    s.maximumProduct(res);
//    return 0;
//}