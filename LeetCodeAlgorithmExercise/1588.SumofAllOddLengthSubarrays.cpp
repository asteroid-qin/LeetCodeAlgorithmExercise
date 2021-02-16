//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：返回 arr 中 所有奇数长度子数组的和 。
//    // 思路：三重for循环：
//    // 第一重，长度：每轮长度size都不同，默认从1开始，如果arr的长度m是奇数，那么size=m，否则是m-1
//    // 第二重，头部：每轮开始遍历的头，至少要预留size个空间，所以i <= m - k
//    // 第三重，开始求和：根据第二重的头开始，遍历size次。把当前指向的值放入res中
//    // 循环结束，返回结果
//    // 这里可以优化，因为可以看到三重for循环其实进行了大量重复计算。
//    // 首先，第一重for循环不变。长度不变。
//    // 然后一个for循环，在里面先计算0到长度的和
//    // 再一个for循环，从1开始，减去i-1的值，加上i+1的值
//    // 最外层for循环结束，得到结果.这样从O(n^3)优化到O(n^2)
//    // 看了题解，发现可以优化到O(n)...太离谱了..不过题解写的挺清楚的
//    int sumOddLengthSubarrays(vector<int>& arr) {
//        int m = arr.size(), res = 0;
//        int size = (m & 1) ? m : m - 1; // 长度是奇数就是m偶数就是长度-1
//        for (int k = 1; k <= size; k += 2) {
//            int sum = 0;
//            for (int i = 0; i < k; i++) {
//                sum += arr[i];
//            }
//
//            res += sum;
//            for (int i = 1; i <= m - k; i++) {
//                sum = sum - arr[i - 1] + arr[i + k - 1];
//                res += sum;
//            }
//        }
//
//        return res;
//    }
//
//};
//
//int main() {
//	return 0;
//}